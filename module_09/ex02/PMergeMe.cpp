#include "PMergeMe.hpp"

bool isDigitOnly(char *s) {
	std::string str(s);
	for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
		if (std::isdigit(*it) == false)
			return false;
	}
	return true;
}

PMergeMe::PMergeMe( void ) : v(0), d(0) {}

PMergeMe::PMergeMe( char **args, int size ) {
	long *nbr = new long[size];
	for (int i = 0; i < size; i++) {
		if (!isDigitOnly(args[i]))
			throw NumbersException();
		std::istringstream	iss(args[i]);
		iss >> nbr[i];
		if (nbr[i] > 2147483647)
			throw NumberTooLarge();
	}
	for (int i = 0; i < size; i++) {
		v.push_back(nbr[i]);
		d.push_back(nbr[i]);
	}
	delete [] nbr;
}

PMergeMe::PMergeMe( PMergeMe const & other ) : v(other.v), d(other.d) {}

PMergeMe& PMergeMe::operator=( PMergeMe const & other ) {
	if (this != &other) {
		v = other.v;
		d = other.d;
	}
	return *this;
}

PMergeMe::~PMergeMe( void ) {}

PMergeMe::Chrono::Chrono( void ) {
	gettimeofday(&_start, NULL);
}

PMergeMe::Chrono::Chrono( const Chrono & other ) : _start(other._start), _stop(other._stop) {}

PMergeMe::Chrono& PMergeMe::Chrono::operator=( const Chrono & other ) {
	if (this != &other) {
		_start = other._start;
		_stop = other._stop;
	}
	return *this;
}

PMergeMe::Chrono::~Chrono( void ) {}

double	PMergeMe::Chrono::stop( void ) {
	gettimeofday(&_stop, NULL);
    double secs = static_cast<double>(_stop.tv_sec - _start.tv_sec);
    double usecs = static_cast<double>(_stop.tv_usec - _start.tv_usec);
    return secs * 1000000.0 + usecs;
}

static std::vector<size_t> insertionGroupBounds(size_t upTo)
{
    std::vector<size_t> t;
    t.push_back(1);
    t.push_back(3);
    while (t.back() < upTo)
    {
        size_t next = t[t.size() - 1] + 2 * t[t.size() - 2];
        t.push_back(next);
    }
    return t;
}

static std::vector<size_t> buildInsertionOrder(size_t count)
{
    std::vector<size_t> order;
    if (count <= 1)
        return order;  // solo losers[0]: niente altro da ordinare

    std::vector<size_t> bounds = insertionGroupBounds(count);

    size_t prevBoundary = 1;  // t(1) = 1, gia' gestito (losers[0])
    for (size_t i = 1; i < bounds.size(); ++i)
    {
        size_t hi = bounds[i];
        if (hi > count)
            hi = count;

        // dentro ogni gruppo: ordine DECRESCENTE
        for (size_t idx1 = hi; idx1 > prevBoundary; --idx1)
            order.push_back(idx1 - 1);

        prevBoundary = bounds[i];
        if (hi == count)
            break;
    }
    return order;
}

template <typename Container>
static void fordJohnson(Container& data)
{
    typedef typename Container::iterator Iter;
    typedef typename Container::value_type T;

    size_t n = data.size();
    if (n < 2)
        return;

    Container winners, losers;
    Container stragglers;

    size_t i = 0;
    for (; i + 1 < n; i += 2)
    {
        T a = data[i];
        T b = data[i + 1];
        if (a > b)
            std::swap(a, b);
        losers.push_back(a);
        winners.push_back(b);
    }
    for (; i < n; ++i)              // raccoglie TUTTI gli elementi avanzati
        stragglers.push_back(data[i]);

    Container winnersOriginalOrder = winners;
    fordJohnson(winners);

    Container main = winners;
	if (!losers.empty())
    		main.insert(main.begin(), losers[0]);

    std::vector<size_t> order = buildInsertionOrder(losers.size());
    for (size_t o = 0; o < order.size(); ++o)
    {
        size_t k = order[o];
        T partnerValue = winnersOriginalOrder[k];
        Iter bound = std::lower_bound(main.begin(), main.end(), partnerValue);
        Iter pos = std::upper_bound(main.begin(), bound, losers[k]);
        main.insert(pos, losers[k]);
    }

    // inserisco ogni straggler, uno alla volta, con upper_bound su tutto main
    for (typename Container::iterator it = stragglers.begin(); it != stragglers.end(); ++it)
    {
        Iter pos = std::upper_bound(main.begin(), main.end(), *it);
        main.insert(pos, *it);
    }

    data = main;
}

void	PMergeMe::pmerge( void ) {
	
	std::cout << "Before: ";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	
	Chrono vChrono;
	fordJohnson(v);
	vTime = vChrono.stop();
	
	Chrono dChrono;
	fordJohnson(d);
	dTime = dChrono.stop();

	std::cout << "After: ";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Time to process a range of " << v.size() << " elements with std::vector : " << vTime << "ms" << std::endl;
	std::cout << "Time to process a range of " << d.size() << " elements with std::deque : " << dTime << "ms" << std::endl;
}

const char *PMergeMe::NumbersException::what() const throw() { return "Error"; }
const char *PMergeMe::NumberTooLarge::what() const throw() { return "Number too large: insert positive integer"; }

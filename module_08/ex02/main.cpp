#include "MutantStack.hpp"
#include <list>

int main()
{
	{
		std::cout << "\n=== TEST CON MUTANT STACK ===" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "\nultimo elemento: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "dimensione container: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "accesso tramite iteratore: " << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << "\n=== TEST CON ALGORITHMS ===" << std::endl;
		std::cout << "\n--- ricerca elemento più basso tramite min_element() ---" << std::endl;
		it = min_element(mstack.begin(), mstack.end());
		std::cout << *it << std::endl;
		std::cout << "\n--- ricerca iteratore elemento tramite find() ---" << std::endl;
		it = find(mstack.begin(), mstack.end(), 5);
		std::cout << *it << std::endl;
		std::cout << "\n--- ricerca numero ripetizioni di un elemento tramite count() ---" << std::endl;
		int nbr = count(mstack.begin(), mstack.end(), 5);
		std::cout << nbr << std::endl;
	}
	{
		std::cout << "\n=== TEST CON LIST ===" << std::endl;
		std::list<int> lst;
		lst.push_back(5);
		lst.push_back(17);
		std::cout << "\nultimo elemento: " << lst.back() << std::endl;
		lst.pop_back();
		std::cout << "dimensione container: " << lst.size() << std::endl;
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		//[...]
		lst.push_back(0);
		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "accesso tramite iteratore: " << *it << std::endl;
			++it;
		}
	}
	return 0;
}
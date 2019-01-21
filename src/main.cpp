#include <iostream>
#include "SinglyLinkedList.h"

int main()
{
	SinglyLinkedList list;

	for (int i = 0; i < 10; ++i)
		list.push_back(i);

	list.print();
	std::cout << "\n\nadding 57 to the front of the list\n\n";
	list.push_front(57);
	list.print();

	std::cout << "\n\nremoving first element in the list\n\n";
	list.pop_front();
	list.print();
	std::cout << "size of the list: "<< list.getSize() << "\n";
	
	std::cout << "\nremoving the last element in the list\n\n";
	list.pop_back();
	list.print();
	std::cout << "size of the list: " << list.getSize() << "\n";

	std::cout << "\nadding 22 to the back of the list\n\n";
	list.push_back(22);
	list.print();
	std::cout << "size of the list: " << list.getSize() << "\n";

	std::cout << "\nfirst element in the list is: "<< list.front() << "\n";
	std::cout << "\nlast element in the list is: " << list.back() << "\n";

	std::cout << "\nclearing the linked list.\n";
	list.clear();
	std::cout << "\nis the linked list empty?: ";
	if (list.empty())
		std::cout << "Yes.\n";
	else
		std::cout << "No.\n";

	std::cout << "\npopulating list via push_front()\n";

	for (int i = 0; i < 10; ++i)
		list.push_front(i);
	
	std::cout << "\n new list: ";
	list.print();

	std::cout << "\n\nreversing the list...\n";
	list.reverse();
	std::cout << "\n new list: ";
	list.print();
	std::cout << "\n\n";


	system("pause");
	return 0;
}
#include "SimpleList.h"
#include <iostream>

int main() {
	std::cout << "hello world!\n";

	/*SimpleList<int>* list = new SimpleList<int>;
	list->data = 10;
	list->nextnode = new SimpleList<int>;
	(list->nextnode)->data = 20;
	(list->nextnode)->nextnode = new SimpleList<int>;
	((list->nextnode)->nextnode)->data = 30;
	*/

	SimpleList<int>* list = new SimpleList<int>;
	list->data = 10;
	list->InsertAfter(30);
	list->InsertAfter(20);

	std::cout << "La lista contiene :";

	SimpleList<int>* itr = list;
	std::cout << itr->data<< ", ";
	itr = itr->nextNode;
	std::cout << itr->data << ", ";
	itr = itr->nextNode;
	std::cout << itr->data << "\n";
	itr = list;
}

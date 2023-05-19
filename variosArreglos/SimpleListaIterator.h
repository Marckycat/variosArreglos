#pragma once
#include "SimpleLinkedList.h"
#include "SimpleList.h"

template<class Datatype>
class SimpleListaIterator
{
public:
	SimpleList<Datatype>* currentNode;
	SimpleLinkedList<Datatype>* list;
	SimpleListaIterator(SimpleList<Datatype>* p_currentNode = 0, SimpleLinkedList<Datatype>* p_list = 0) {
		list = p_list;
		currentNode = p_currentNode;
	}

	void Start(void);
	void MoveIterator();
	Datatype& Item();
	bool isValid();
	SimpleListaIterator<Datatype> GetIterator();

};

template <typename Datatype>
void SimpleListaIterator<Datatype>::Start(void) {
	if (list != 0)
		currentNode = list->head;
}

template <typename Datatype>
void SimpleListaIterator<Datatype>::MoveIterator(void) {
	if (currentNode != 0)
		currentNode = currentNode->nextNode;
}

template <typename Datatype>
Datatype& SimpleListaIterator<Datatype>::Item(void) {
	return currentNode->data;
}

template <typename Datatype>
bool SimpleListaIterator<Datatype>::isValid(void) {
	return(currentNode != 0);
}

template <typename Datatype>
SimpleListaIterator<Datatype> SimpleListaIterator<Datatype>::GetIterator(void) {
	return SimpleListaIterator<Datatype>(head, this);
}
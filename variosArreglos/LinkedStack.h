#pragma once
#include "SimpleLinkedList.h"
#include "SimpleList.h"
#include "SimpleListaIterator.h"

template<class Datatype>

class LinkedStack : public SimpleLinkedList<Datatype>
{
public:
	void Push(Datatype);
	void Pop(void);
	Datatype Top(void);
};

template <typename Datatype>
void LinkedStack<Datatype>::Push(Datatype p_data) {
	Prepend(p_data);
}

template <typename Datatype>
void LinkedStack<Datatype>::Pop(void) {
	//
}

template <typename Datatype>
Datatype LinkedStack<Datatype>::Top(void) {
	return tail->data;
}
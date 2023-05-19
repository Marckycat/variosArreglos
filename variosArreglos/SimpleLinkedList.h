#pragma once
#include "SimpleList.h"

template<class Datatype>
class SimpleLinkedList
{
public:
	SimpleList<Datatype>* head;
	SimpleList<Datatype>* tail;
	int count;

	SimpleLinkedList(void) {
		SimpleList<Datatype>* itr = head;
		SimpleList<Datatype>* next;
	}

	~SimpleLinkedList(void) {
		SimpleList<Datatype>* itr = head;
		SimpleList<Datatype>* next;

		while (itr != 0) {
			next = itr->nextNode;
			delete itr;
			itr = next;
		}

	}

	void  Append(Datatype p_data);
	void  Prepend(Datatype p_data);
	void  RemoveHead(Datatype p_data);
	void  RemoveTail(Datatype p_data);


};

template <typename Datatype>
void SimpleLinkedList<Datatype>::Append(Datatype data) {
	if (head == 0) {
		head = trail = new SimpleList<Datatype>;
		head->data = data;

	}
	else {
		tail->InsertAfter(data);
		tail = tail->nextNode;
	}
	count++;
}


template <typename Datatype>
void SimpleLinkedList<Datatype>::Prepend(Datatype data) {
	SimpleList<Datatype>* newnode = new SimpleList<Datatype>;
	newnode->data = data;
	newnode->nextNode = head;

	head = newnode;

	if (tail == 0) {
		tail == head;
	}

	count++;
	
}

template <typename Datatype>
void SimpleLinkedList<Datatype>::RemoveHead(Datatype data) {
	SimpleList<Datatype>* node = 0;
	if (head != 0) {
		node = head->nextNode;
		delete head;
		head = node;

		if (head = 0)
			tail = 0;
		count--;
		
	}
	
}

template <typename Datatype>
void SimpleLinkedList<Datatype>::RemoveTail(Datatype data) {
	
}
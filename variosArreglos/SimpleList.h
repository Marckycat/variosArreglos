#pragma once

template<class Datatype>

class SimpleList
{
	
	public:
		Datatype data;
		SimpleList<Datatype>* nextNode;
		void InsertAfter(Datatype);
	

};

template <typename Datatype>
void SimpleList<Datatype>::InsertAfter(Datatype data) {

	SimpleList<Datatype>* newnode = new SimpleList<Datatype>;
	newnode->nextNode = nextNode;
	newnode->data = data;
	nextNode = newnode;
} 
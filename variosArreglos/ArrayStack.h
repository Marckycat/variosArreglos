#pragma once
#include "GeneralArray.h"

template<class Datatype>
class ArrayStack : public GeneralArray<Datatype>
{

public:
	GeneralArray(int p_size) : GeneralArray<Datatype> (p_size) {
		topIndex = 0;
	}
    int topIndex;
	void Push(Datatype);
	void Pop(void);
	Datatype Top(void);
	int Count(void);
};

template <typename Datatype>
void ArrayStack<Datatype>::Push(Datatype p_data) {
	if (topIndex != size) {
		array[topIndex] = p_data;
		topIndex++;
		return true;
	}
	return false;
}

template <typename Datatype>
void ArrayStack<Datatype>::Pop(void) {
	
	if (topIndex > 0)
		topIndex--;

}

template <typename Datatype>
Datatype ArrayStack<Datatype>::Top(void) {
	//tarea
}

template <typename Datatype>
int ArrayStack<Datatype>::Count(void) {

	return topIndex;

}

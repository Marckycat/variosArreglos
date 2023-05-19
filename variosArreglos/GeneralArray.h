#pragma once
template <class Datatype>

class GeneralArray
{
public:
	Datatype* array;
	int size;

	GeneralArray(int p_size) {
		array = new Datatype[size];
		size = p_size;
	}

	~GeneralArray() {
		if (array != 0)
			delete[] array;
			array = 0;
	}

	Datatype& operator[](int p_index);

};

template <typename Datatype>
	Datatype& GeneralArray<Datatype>::operator[](int p_index) {
		return array[p_index];
	}
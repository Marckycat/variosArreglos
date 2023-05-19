#include<iostream>

int main() {

	std::cout << "hello world" << std::endl;

	int* arreglo1D = 0;
	arreglo1D = new int[10];

	delete[] arreglo1D;

	int** arreglo2D = 0;
	arreglo2D = new int* [10];

	for (int i = 0; i < 10; i++) {
		arreglo2D[i] = new int[10];
	}


}
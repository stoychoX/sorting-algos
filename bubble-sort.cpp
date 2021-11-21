//bubble sort with swap-optimization
//written on 7.10.2021

#include"swap.cpp" //alternative to std::swap, which could be included easily.

template <class T>
void bubbleSort(T* arr, int length) {
	bool swapped = false;
	for (int i = 0; i < length; i++) {
		swapped = false;
		for (int j = 0; j < length - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (!swapped)	
			break;
	}
}

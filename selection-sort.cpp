#include"swap.cpp"  //used as alternative to std::swap
template<class T>
void selectionSort(T* arr, int length) {
	for (int i = 0; i < length; i++) {
		int minIndex = i;
		for (int j = i; j < length; j++) {
			if (arr[minIndex] > arr[j])	
				minIndex = j;
		}

		if (minIndex != i)	
			swap(arr[i], arr[minIndex]);
	}
}

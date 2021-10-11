#include <iostream>

template<class T>
void merge(T* arr, int lenOne, T* arr2, int lenTwo) {
	T* resultArray = new T[lenOne + lenTwo];

	int pntOne = 0;
	int pntTwo = 0;
	int it = 0;

	while (pntOne < lenOne && pntTwo < lenTwo) {
		if (arr[pntOne] <= arr2[pntTwo])
			resultArray[it++] = arr[pntOne++];
		else
			resultArray[it++] = arr2[pntTwo++];
	}
  
	while (pntOne < lenOne)
		resultArray[it++] = arr[pntOne++];
  
	while (pntTwo < lenTwo)
		resultArray[it++] = arr2[pntTwo++];

	for (int i = 0; i < lenOne + lenTwo; i++)
		arr[i] = resultArray[i];

	delete[] resultArray;
}

template<class T>
void mergeSort(T* arr, int length) {
	if (length == 1)
		return;

	int separator = length / 2;

	mergeSort(arr, separator);
	mergeSort(arr + separator, length - separator);

	merge<T>(arr, separator, arr + separator, length - separator);
}

int main() {
	int arr[100];
	for (int i = 0; i < 100; i++)
		arr[i] = rand() % 1000 + 1;
	mergeSort(arr, 100);
	for (int i = 0; i < 100; i++)
		std::cout << arr[i] << std::endl;
}

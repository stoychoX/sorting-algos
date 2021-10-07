//7.10.2021
template<class T>
void insertionSort(T* arr, int length) {
	for (int i = 1; i < length; i++) {
		T lastElem = arr[i];
		int toInsert = i;
		for (int j = i - 1; j >= 0; --j) {
			if (arr[j] > lastElem) {
				arr[j + 1] = arr[j];
				--toInsert;
			}
			else 
				break;
		}
		arr[toInsert] = lastElem;
	}
}

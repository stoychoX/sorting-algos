void buildHeap(int* arr, int length, int root) {
	int largest = root;
	int left = 2 * root + 1;
	int right = 2 * root + 2;

	if (left < length && arr[left] > arr[largest]) largest = left;
	if (right < length && arr[right] > arr[largest]) largest = right;

	if (largest != root) {
		std::swap(arr[root], arr[largest]);
		buildHeap(arr, length, largest);
	}
}

void heapSort(int* arr, int length) {
	for (int i = length / 2 - 1; i >= 0; --i)
		buildHeap(arr, length, i);
	
	for (int i = length - 1; i > 0; --i) {
		std::swap(arr[0], arr[i]);
		buildHeap(arr, i, 0);
	}
}

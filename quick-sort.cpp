int partition(int* arr, int start, int end) {
	int pivot = arr[end];
	int index = start - 1;

	for (int i = start; i < end; i++) {
		if (arr[i] < pivot) {
			++index;
			std::swap(arr[index], arr[i]);
		}
	}
	std::swap(arr[++index], arr[end]);
  
	return index;
}

void quickSort(int* arr, int start, int end) {
	if (start < end) {
		int pi = partition(arr, start, end);
		quickSort(arr, start, pi - 1);
		quickSort(arr, pi + 1, end);
	}
}

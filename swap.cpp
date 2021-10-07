//Simple swap function used as alternative to std::swap, not for optimization purposes!

template<class T>
void swap(T& dest, T& source) {
	T temp = dest;
	dest = source;
	source = temp;
}

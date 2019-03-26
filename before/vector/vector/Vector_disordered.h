#pragma once
template <typename T>
int Vector<T>::disordered() const{
	int count = 0;
	for (int i = 0; i < _size;i++) {
		if (_elem[i - 1] > elem[i])count++;
	}
	return count;
}
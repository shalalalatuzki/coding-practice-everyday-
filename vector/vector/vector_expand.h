#pragma once
template <typename T>
void Vector<T>::expand() {
	//记住要判定是否符合扩容条件
	if (_size < _capacity)return;
	if (_capacity < DEFAULT_CAPACITY)_capacity = DEFAULT_CAPACITY;
	T* oldElem = _elem;
	_elem = new T[_capacity <<= 1];
	for (int i = 0; i < size;i++) {
		_elem[i] = oldElem[i];
	}
	delete[]elem;
}
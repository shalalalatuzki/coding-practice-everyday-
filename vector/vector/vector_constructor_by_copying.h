#pragma once
template <typename T>
void Vector<T>::copyFrom(T const*A,Rank lo,Rank hi) {
	_elem = new T[_capacity = 2 * (hi - lo)]; size = 0//�������󣬹�ģ����
	while(lo<hi)
	_elem[_size++] = _elem[lo++];
}
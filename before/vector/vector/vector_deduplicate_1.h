#pragma once
template <typename T>
int Vector<T>::deduplicate() {
	int oldSize = _size;//¼ÇÂ¼¾É¹æÄ£
	int i = -1;
	while (++i < _size) {
		int j = i + 1;
		while (j<size)
		{
			if (elem[i] == elem[j]) {
				//remove(elem[j]);
				remove(j);
			}
			else
				j++;
		}
	}
	return oldSize - _size;
}
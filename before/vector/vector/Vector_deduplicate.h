#pragma once
//删除无序向量中的重复元素
template <typename T>int Vector<T>::deduplicate() {
	//记录原始规模
	int oldSize = _size;
	//_elem[1]开始
	Rank i = 1;
	while (i < _size) {
		find(_elem[i], 0, i) < 0 ?
			i++ : remove(i);
	}
	return oldSize - _size;
}
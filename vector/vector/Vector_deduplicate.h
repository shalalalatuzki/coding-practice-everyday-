#pragma once
//ɾ�����������е��ظ�Ԫ��
template <typename T>int Vector<T>::deduplicate() {
	//��¼ԭʼ��ģ
	int oldSize = _size;
	//_elem[1]��ʼ
	Rank i = 1;
	while (i < _size) {
		find(_elem[i], 0, i) < 0 ?
			i++ : remove(i);
	}
	return oldSize - _size;
}
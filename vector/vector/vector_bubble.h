#pragma once
template <typename T>Rank Vector<T>::bubble(Rank lo, Rank hi) {
	Rank last = lo;
	while (++lo < hi) {
		if (_elem[lo - 1] > _elem[lo])
		{
			last = lo;
			swap(_elem[lo-1],_elem[lo]);
		}
	}
	return last;
}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main() {
//	vector<vector<int>> matrix = { {1,2,3},{4,5,6} ,{7,8,9} };
//	if (matrix.empty() || matrix[0].empty()) return {};
//	int m = matrix.size(), n = matrix[0].size(), r = 0, c = 0;
//	int i = 0, j = 0, k = 0;
//	vector<vector<int>> dir = { { 0,1 },{ 1,0 },{ 0,-1 },{ -1,0 } };
//	vector<int> reset(m*n);
//	int size = m * n;
//	for (int index = 0; index<size; index++) {
//		reset[index] = matrix[r][c];
//		r += dir[k][0];
//		c += dir[k][1];
//		if (c >= n) { c = n - 1; r += 1; k = 1; i++; }
//		if (r >= m) { r = m - 1; c -= 1; k = 2; n--; }
//		if (c<j) { c = j; r -= 1; k = 3; m--; }
//		if (r<i) { r = i; c += 1; k = 0; j++; }
//	}
//	for (int & item : reset) {
//		cout << " " << item;
//	}
//	system("pause");
//	return 0;
//}
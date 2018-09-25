//class Solution {
//public:
//	vector<vector<int>> generate(int numRows) {
//		vector<vector<int>> row;
//		if (numRows<0) return row;
//		row.assign(numRows, vector<int>(1));
//		for (int i = 0; i<numRows; i++) {
//			row[i][0] = 1;
//			if (i == 0) continue;
//			for (int j = 1; j<i; j++) {
//				row[i].push_back(row[i - 1][j - 1] + row[i - 1][j]);
//			}
//			row[i].push_back(1);
//		}
//		return row;
//	}
//};
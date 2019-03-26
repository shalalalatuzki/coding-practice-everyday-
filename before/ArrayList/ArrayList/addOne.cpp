//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		int length = digits.size();
//		int flag = 0;
//		for (int i = length - 1; i >= 0; i--) {
//			if (digits[i] + 1<10) {
//				digits[i] += 1;
//				return digits;
//			}
//			digits[i] = (digits[i] + 1) % 10;
//			flag++;
//		}
//		if (flag == length && digits[0] == 0) {
//			int lengther = length + 1;
//			vector<int> digitsAdd(lengther);
//			*digitsAdd.begin() = 1;
//			for (int i = 0; i<length; i++) {
//				digitsAdd[i + 1] = digits[i];
//			}
//			return digitsAdd;
//		}
//		return digits;
//	}
//};
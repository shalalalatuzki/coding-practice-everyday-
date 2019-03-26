//class Solution {
//public:
//	int dominantIndex(vector<int>& nums) {
//		int index = nums.size();
//		int max = 0;
//		int tag = 0;
//		if (index <= 1) {
//			return index - 1;
//		}
//		for (int i = 0; i<index; i++) {
//			if (nums[max] <= nums[i])
//				max = i;
//		}
//		for (int i = 0; i<index; i++) {
//			if (nums[i] * 2 <= nums[max] && max != i) {
//				tag++;
//			}
//		}
//		if (tag == index - 1) return max;
//		else return -1;
//	}
//};
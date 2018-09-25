//class Solution {
//public:
//	int pivotIndex(vector<int>& nums) {
//		if (nums.size() == 0) { return -1; }
//		for (int i = 0; i<nums.size(); i++)
//		{
//			int forward = 0;
//			int backward = 0;
//			for (int j = 0; j<i; j++) {
//				forward += nums[j];
//			}
//			for (int k = i + 1; k<nums.size(); k++) {
//				backward += nums[k];
//			}
//			if (forward == backward)
//				return i;
//			if (i == nums.size() - 1)
//				return -1;
//		}
//	}
//};
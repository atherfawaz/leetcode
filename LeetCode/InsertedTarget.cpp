class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int start, end, mid;
		start = 0;
		end = nums.size() - 1;
		while (start < end) {
			mid = (end - start) / 2;
			if (nums[mid] == target) {
				return mid;
			}
			else {
				if (target < mid) {
					end = mid;
				}
				else {
					start = mid;
				}
			}
		}
		return mid;
	}
};
class Solution {
public:
    int binarySearch(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        int mid;
        while (left < right) {
            mid = left + ((right-left) >> 1);
            if (nums[mid] <= target) {
                left = mid+1;
            } else {
                right = mid;
            }
        }
        return left;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0 || nums[0] > target) {
            return {-1, -1};
        }
        int leftPos = binarySearch(nums, target-1);
        int rightPos = binarySearch(nums, target) - 1;
        if (leftPos > rightPos || leftPos == nums.size()) {
            return {-1, -1};
        } else {
            return {leftPos, rightPos};
        }
    }
};
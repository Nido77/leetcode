class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int curPos = nums.size()-1;
        vector<int> ans(nums.size());
        while (left <= right) {
            if (nums[left] * nums[left] >= nums[right]*nums[right]) {
                ans[curPos] = nums[left] * nums[left];
                --curPos;
                ++left;
            } else {
                ans[curPos] = nums[right] * nums[right];
                --curPos;
                --right;
            }
        }
        return ans;
    }
};
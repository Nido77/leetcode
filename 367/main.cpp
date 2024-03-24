class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) {
            return num;
        }
        int left = 1;
        int right = num;
        int mid;
        while (left < right) {
            mid = left + ((right-left) >> 1);
            if (mid <= num / mid) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        --left;
        return (static_cast<long>(left) * left == static_cast<long>(num)) ? true : false;
    }
};
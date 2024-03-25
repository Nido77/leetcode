class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }
        int left = 1;
        int right = x;
        int mid;
        while (left < right) {
            mid = left + ((right-left) >> 1);
            if (mid == x / mid) {
                left = mid + 1;
            } else if (mid > x / mid){
                right = mid;
            } else if (mid < x / mid) {
                left = mid + 1;
            }
        }
        return (static_cast<long>(left) * left == static_cast<long>(x)) ? left: left-1;
    }
};
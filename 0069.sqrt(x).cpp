// Leetcode Solution
class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x; // Handle 0 and 1

        int left = 1;
        int right = x;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long midSquared = (long long)mid * mid; // Use long long to prevent overflow

            if (midSquared == x) {
                return mid; // Found the exact square root
            } else if (midSquared < x) {
                left = mid + 1; // Move to the right half
            } else {
                right = mid - 1; // Move to the left half
            }
        }

        return right; // The largest integer whose square is <= x
    }
};
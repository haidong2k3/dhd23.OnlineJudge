class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 1, right = ((long long)num + 1) / 2;
        
        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long pow = mid * mid;

            if (pow == num)
            {
                return true;
            }
            else if (pow > num)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return false;
    }
};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = -1, right = nums.size();
        int mid = left + (right - left + 1) / 2;

        while (right - left > 1)
        {
            if (nums[mid] == target)
            {
                break;
            }
            else if (nums[mid] > target)
            {
                right = mid;
            }
            else
            {
                left = mid;
            }

            mid = left + (right - left + 1) / 2;
        }

        return mid;
    }
};
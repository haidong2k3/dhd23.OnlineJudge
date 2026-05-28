class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0)
            return {-1, -1};

        vector<int> res;
        int left = 0, right = nums.size() - 1;

        while (right > left)
        {
            int mid = left + (right - left) / 2;

            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid;
        }

        if (nums[right] == target)
            res.push_back(right);
        else
            return {-1, -1};

        left = 0, right = nums.size() - 1;

        while (right > left)
        {
            int mid = left + (right - left + 1) / 2;

            if (nums[mid] > target)
                right = mid - 1;
            else
                left = mid;
        }

        res.push_back(left);

        return res;
    }
};
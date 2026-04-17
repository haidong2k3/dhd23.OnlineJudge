class Solution {
public:
    int maxArea(vector<int>& height) {
        int sz = height.size();
        int res = 0;

        int left = 0, right = sz - 1;
        while (left < right)
        {
            int lower = (height[left] < height[right]) ? left : right;
            int cur = (right - left) * height[lower];
            res = max(res, cur);

            if (lower == left)
                left++;          
            else
                right--;
        }

        return res;
    }
};
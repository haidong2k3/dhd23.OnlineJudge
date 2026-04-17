class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        int hashmap[20001] = {0};

        for (int i = 0; i < n; i++)
        {
            hashmap[nums[i] + 10000]++;
        }
        
        int res = 0;
        int flag = 1;

        for (int i = 0; i <= 20000; i++)
        {
            int key = i - 10000;
            int val = hashmap[i];
            
            while (val)
            {
                if (flag)
                    res += key;
                flag = flag ^ 1;
                val--;
            }
        }

        return res;
    }
};
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int isFull0 = 1;
        vector<string> numsStr;
        for (auto &num : nums)
        {
            numsStr.push_back(to_string(num));
            if (num != 0)
                isFull0 = 0;
        }

        if (isFull0)
            return "0";

        sort(numsStr.begin(), numsStr.end(), 
            [](string a, string b){
                string tmp1 = a + b;
                string tmp2 = b + a;
                return tmp1 > tmp2;
            });

        string res = "";
        for (string &str : numsStr)
            res += str;

        return res;
    }
};
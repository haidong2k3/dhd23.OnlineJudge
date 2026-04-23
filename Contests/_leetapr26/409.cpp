class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charfreq;
        for (char c : s)
        {
            charfreq[c]++;
        }

        int res = 0;
        int flag = 0;

        for (auto &[key, val] : charfreq)
        {
            if (val % 2 == 0)
                res += val;
            else if (flag == 0)
            {
                res += val;
                flag = 1;
            }
            else
            {
                res += (val - 1);
            }
        }

        return res;
    }
};
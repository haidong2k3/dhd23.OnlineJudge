class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int num5 = 0;
        int num10 = 0;

        for (auto i : bills)
        {
            if (i == 5)
                num5++;
            else if (i == 10)
            {
                if (num5 >= 1)
                {
                    num5--;
                    num10++;
                }
                else
                    return false;
            }
            else
            {
                if (num5 >= 1 && num10 >= 1)
                {
                    num5--;
                    num10--;
                }
                else if (num5 >= 3)
                {
                    num5 -= 3;
                }
                else
                    return false;
            }
        }

        return true;
    }
};
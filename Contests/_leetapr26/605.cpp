class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sz = flowerbed.size();
        int cnt = n, tmp = 1;

        for (int i = 0; i < sz; i++)
        {
            if (flowerbed[i] == 0)
            {
                tmp++;
            }
            else
            {
                cnt -= (tmp - 1) / 2;
                tmp = 0;
            }
        }

        if (flowerbed[sz - 1] == 0)
        {
            cnt -= (tmp) / 2;
        }

        return (max(cnt, 0) == 0) ? true : false;
    }
};
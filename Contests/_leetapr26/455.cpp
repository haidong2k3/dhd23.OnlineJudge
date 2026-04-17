class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ssz = s.size();
        if (ssz == 0)
            return 0;

        int gsz = g.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int gi = 0;
        int res = 0;

        for (int si = 0; si < ssz; si++)
        {
            if (s[si] >= g[gi])
            {
                res++;
                gi++;
            }

            if (gi == gsz)
                break;
        }

        return res;
    }
};
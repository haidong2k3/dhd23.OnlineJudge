#include <iostream>
#include <cstdio>
#include <fstream>

#include <string>
#include <vector>

#include <numeric>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace  std;

void solve()
{
    int n;
    cin >> n;

    string s1, s2;
    cin >> s1;
    cin >> s2;

    vector<int> dff(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            dff[i] = 1;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if ((dff[i] && dff[i+1]) && (s1[i] == s1[i + 1]))
        {
            dff[i] = 0;
            dff[i+1] = 0;
        }
    }

    int res = 0;
    for (int i : dff)
        res += i;

    cout << res << endl;
}

int main()
{
    if (ifstream("input.txt").good()) {
        freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    }

    int numCases = 1;
    cin >> numCases;
    while (numCases--) solve();

    return 0;
}
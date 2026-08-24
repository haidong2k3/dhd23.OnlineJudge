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
    string s;
    cin >> s;

    int n = s.size();
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i+1])
            cnt++;
    }

    if (cnt >= 3)
        cout << "NO";
    else
        cout << "YES";

    cout << endl;
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
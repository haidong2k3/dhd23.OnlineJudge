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
    long long x, y;
    cin >> x >> y;

    long long k = y / x;

    int res = 0;
    if (k >= 3)
        res = 1;

    if (res)
        cout << "YES";
    else
        cout << "NO";

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
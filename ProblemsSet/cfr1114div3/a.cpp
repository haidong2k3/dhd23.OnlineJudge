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

/*
    - sorting 3 phần tử 
    - so sánh 2 hiệu
    => Otime(1)
    basic math, sorting
*/

void solve()
{
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];

    sort(a.begin(), a.end());

    int res = min (a[1] - a[0], a[2] - a[1]);

    cout << res << endl;
}

int main()
{
    if (ifstream("input.txt").good())
        freopen("input.txt", "r", stdin);

    int numCases = 1;
    cin >> numCases;
    
    while (numCases--) solve();

    return 0;
}
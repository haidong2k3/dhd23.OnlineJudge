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
    string, logic
    Otime(n)
    Ospace(1)
*/

void solve()
{
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int a0 = 0, b0 = 0;
    int a0even = 0, b0even = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
        {
            a0++;
            if (i % 2 == 0)
                a0even++;
        }

        if (b[i] == '0')
        {
            b0++;
            if (i % 2 == 0)
                b0even++;
        }
    }

    int res = ((a0 == b0 && a0even == b0even) ? 1 : 0);
    cout << (res ? "YES" : "NO") << endl;

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
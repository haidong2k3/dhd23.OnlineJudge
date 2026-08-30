#include <iostream>
#include <cstdio>
#include <fstream>

#include <string>
#include <vector>
#include <queue>

#include <numeric>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace  std;

/*
    greedy with queue
    Otime(n)
    Ospace(n)
*/

void solve()
{
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    //---

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

    if (!(a0 == b0 && a0even == b0even))
    {
        cout << -1 << endl;
        return;
    }

    //---

    queue<int> evens, odds;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1' && i % 2 == 0)
        {
            evens.push(i);
        }
        else if (a[i] == '1' && i % 2 == 1)
        {
            odds.push(i);
        }
    }

    long long res = 0;

    for (int i = 0; i < n; i++)
    {
        int tmp = 0;

        if (b[i] == '1' && i % 2 == 0)
        {
            tmp = abs(evens.front() - i) / 2;
            evens.pop();
        }
        else if (b[i] == '1' && i % 2 == 1)
        {
            tmp = abs(odds.front() - i) / 2;
            odds.pop();
        }

        res += tmp;
    }

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
#include <iostream>
#include <cstdio>
#include <fstream>

#include <string>
#include <vector>

#include <numeric>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <map>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        
        a[tmp]++;
    }

    //
    int curMex = 0;
    int id = 1;

    while (id < n)
    {
        if (a[curMex] > 0)
        {
            curMex++;
            id++;
        }
        else if (a[id] > 1 && curMex <= (id - 1) / 2) // a[curMex] == 0
        {
            a[curMex]++;
            a[id]--;
            curMex++;
        }
        else
        {
            id++;
        }
    }

    //
    int res = 0;
    for (int i = 0; i <= n; i++)
    {
        if (flag[i] == 0)
        {
            res = i;
            break;
        }
    }

    cout << res << endl;

}

int main()
{
    if (ifstream("input.txt").good())
        freopen("input.txt", "r", stdin);

    int numCases = 1;
    // cin >> numCases;
    
    while (numCases--) solve();

    return 0;
}
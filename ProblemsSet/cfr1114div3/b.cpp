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
    implementation

    đếm số phần tử phân biệt
    - 2 bên cụm = 1 giống nhau → nêú có, xoá cụm, tổng -2
    - nếu có cụm = 1 nhưg 2 bên khôg giống nhau (all trường hợp) → tổng -1
    - không có cụm = 1 → tổng giũ nguyên

    Otime(n)
    Ospace(n)
*/

void solve()
{
    int n;
    cin >> n;

    vector<pair<char, int>> numchar;

    char c;
    cin >> c;
    numchar.push_back({c, 1});

    for (int i = 1; i < n; i++)
    {
        cin >> c;

        if (numchar.back().first == c)
        {
            numchar.back().second++;
        }
        else
        {
            numchar.push_back({c, 1});
        }
    }

    int sz = numchar.size();
    int res = numchar.size();

    for (int i = 1; i < sz - 1; i++)
    {
        if (numchar[i].second == 1)
        {
            if (res == sz)
            {
                res -= 1;
            }
            
            if (numchar[i - 1].first == numchar[i + 1].first)
            {
                res -= 1;
                break;
            }
        }
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
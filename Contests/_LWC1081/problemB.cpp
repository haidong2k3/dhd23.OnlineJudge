#include <iostream>
#include <cstdio>
#include <fstream>

#include <string>
#include <vector>

#include <numeric>
#include <algorithm>
#include <unordered_map>
#include <cmath>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt0 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            cnt0++;
        }
    }

    if (cnt0 == n)
    {
        cout << 0 << endl;
    }
    else if (cnt0 % 2 == 1)
    {
        cout << cnt0 << endl;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cout << i + 1 << " ";
        }
        cout << endl;
    }
    else if ((n - cnt0) % 2 == 0)
    {
        cout << n - cnt0 << endl;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                cout << i + 1 << " ";
        }
        cout << endl;;
    }
    else
    {
        cout << -1 << endl;
    }

}

int main()
{
    // open file
    ifstream fin("input.txt");
    if (fin.good())
    {
        freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    }

    // get number of cases  (from file)
    int number_of_cases = 1;

    string cases_line;
    getline(cin, cases_line);
    number_of_cases = stoi(cases_line);

    // solve
    for (int t = 0; t < number_of_cases; t++)
    {
        solve();
        // solve2();
    }

    return 0;
}
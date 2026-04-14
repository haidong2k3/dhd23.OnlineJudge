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

    int cnt = 1;
    int longgroup = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            cnt++;
        else
            longgroup = 1;
    }

    if (s[n - 1] != s[0] && longgroup == 1)
        cout << cnt + 1 << endl;
    // else if (s[n - 1] == s[0])
    //     cout << cnt - 1 << endl;
    else
        cout << cnt << endl;
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

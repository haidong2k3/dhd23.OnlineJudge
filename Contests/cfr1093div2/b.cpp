#include <iostream>
#include <cstdio>
#include <fstream>

#include <string>
#include <vector>

#include <numeric>
#include <algorithm>
#include <unordered_map>

using namespace std;

void solve()
{
    // input
    int n, m;
    cin >> n >> m;

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        a.push_back(tmp);
    }

    int mxSub = 1;
    int cnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            cnt++;
            mxSub = max(cnt, mxSub);
        }
        else
        {
            cnt = 1;
        }

    }

    cout << ((mxSub >= m) ? "NO" : "YES") << endl;

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
#include <iostream>
#include <cstdio>

#include <string>
#include <vector>

#include <algorithm>
#include <unordered_map>

using namespace std;

void solve()
{
    // input
    int N;
    cin >> N;

    vector<int> a, b, g;

    for (int i = 0; i < N; i++)
    {
        int tmp_a, tmp_b, tmp_g;
        cin >> tmp_a >> tmp_b >> tmp_g;

        a.push_back(tmp_a - 1);
        b.push_back(tmp_b - 1);
        g.push_back(tmp_g - 1);
    }

    //
    char shell[3] = {'a', 'b', 'c'};
    unordered_map<char, int> point = {
        {'a', 0},
        {'b', 0},
        {'c', 0},
    };

    for (int i = 0; i < N; i++)
    {
        swap(shell[a[i]], shell[b[i]]);
        point[shell[g[i]]]++;
    }

    int res = max({point['a'], point['b'], point['c']});

    cout << res << endl;
}

void solve2()
{
}

int main()
{
    int cases_num = 1;

#ifdef LOCAL
    // cout << "LOCAL ENABLE\n";
    freopen("input.txt", "r", stdin);

    // string cases_line;
    // getline(cin, cases_line);
    // cases_num = stoi(cases_line);
#else // ONLINE
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    // string cases_input;
    // getline(cin, cases_input);
    // cases_num = stoi(cases_input);
#endif

    // solve
    for (int t = 0; t < cases_num; t++)
    {
        solve();
        // solve2();
    }

    return 0;
}
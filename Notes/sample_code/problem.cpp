#include <iostream>
#include <cstdio>
#include <fstream>

#include <string>
#include <vector>

#include <numeric>
#include <algorithm>
#include <unordered_map>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    
    return gcd(b, a % b); 
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        
        a.push_back(tmp);
    }
    
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        b.push_back(tmp);
    }

    //
    vector<int> pairGcd;

    for (int i = 0; i < n - 1; i++)
    {
        int tmp = gcd(a[i], a[i + 1]);
        pairGcd.push_back(tmp);
    }

    int res = 0;
    if (a[0] > pairGcd[0])
    {
        res++;
    }

    if (a[n - 1] > pairGcd[n - 2])
    {
        res++;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] > pairGcd[i - 1] * pairGcd[i])
            res++;
    }

    //

    cout << res << endl;
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
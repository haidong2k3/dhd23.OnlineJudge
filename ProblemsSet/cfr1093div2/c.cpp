#include <iostream>
#include <cstdio>
#include <fstream>

#include <string>
#include <vector>

#include <numeric>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace std;

void solve()
{
    // input
    int p, q;
    cin >> p >> q;

    int S = p + 2 * q;

    for (int n = 1; n <= min(S, 13000); n++)
    {
        if ((S-n) % (2*n+1) == 0)
        {
            int m = (S-n) / (2*n+1);
            int qMax = m*n+n;

            if (m >= n && q <= qMax)
            {
                cout << n << " " << m << endl;
                return;
            }
        }
    }

    cout << -1 << endl;

}

int main()
{
    // read-write file
    if (ifstream("input.txt").good()) {
        freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    }

    int numCases = 1;
    cin >> numCases;
    while (numCases--) solve();

    return 0;
}
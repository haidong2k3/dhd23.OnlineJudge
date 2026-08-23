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

void solve()
{
    cout << "Hello, World!\n";

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
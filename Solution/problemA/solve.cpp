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

struct Node {
    int data;
    Node* next;
};

void solve()
{
    Node* head = new Node();
    head->data = 10;
    head->next = nullptr;

    Node* newNode1 = new Node();
    newNode1->data = 20;
    newNode1->next = nullptr;
    
    head->next = newNode1;

    Node* cur = head;
    cout << cur->data << endl;
    cout << cur->next << endl;

    cur = cur->next;
    cout << newNode1 << endl;
    cout << cur->data << endl;
    cout << cur->next << endl;

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
// 101 - The Blocks Problem
#include <deque>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

vector<deque<int>> arr;
int *lookup;

void resetUntil(int idx, int target)
{
    int current = arr[idx].back();
    while (current != target) {
        arr[current].push_back(current);
        arr[idx].pop_back();
        lookup[current] = current;
        current = arr[idx].back();
    }
}

void moveOnto(int a, int b)
{
    resetUntil(lookup[a], a);
    resetUntil(lookup[b], b);
    int x = arr[lookup[a]].back();
    arr[lookup[a]].pop_back();
    arr[lookup[b]].push_back(x);
    lookup[a] = lookup[b];
}

void moveOver(int a, int b)
{
    resetUntil(lookup[a], a);
    int x = arr[lookup[a]].back();
    arr[lookup[a]].pop_back();
    arr[lookup[b]].push_back(x);
    lookup[a] = lookup[b];
}

void pileOver(int a, int b)
{
    stack<int> temp;
    while (arr[lookup[a]].back() != a) {
        temp.push(arr[lookup[a]].back());
        arr[lookup[a]].pop_back();
    }
    temp.push(arr[lookup[a]].back());
    arr[lookup[a]].pop_back();
    while (!temp.empty()) {
        arr[lookup[b]].push_back(temp.top());
        lookup[temp.top()] = lookup[b];
        temp.pop();
    }
}

void pileOnto(int a, int b)
{
    resetUntil(lookup[b], b);
    pileOver(a, b);
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    arr = vector<deque<int>>(n, deque<int>());
    lookup = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i].push_back(i);
        lookup[i] = i;
    }
    string s1, s2;
    int a, b;
    cin >> s1;
    while (s1 != "quit") {
        cin >> a >> s2 >> b;
        if (lookup[a] == lookup[b]) {
            cin >> s1;
            continue;
        }
        if (s1 == "move")
            if (s2 == "onto")
                moveOnto(a, b);
            else
                moveOver(a, b);
        else
            if (s2 == "onto")
                pileOnto(a, b);
            else
                pileOver(a, b);
        cin >> s1;
    }
    for (int i = 0; i < n; i++) {
        cout << i << ":";
        for (deque<int>::iterator it = arr[i].begin(); it != arr[i].end(); it++)
            cout << " " << *it;
        cout << endl;
    }
    return 0;
}

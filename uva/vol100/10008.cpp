// 10008 - What's Cryptanalysis?
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int freq;
    char ch;
    Node(int f, char c) { freq = f; ch = c; }
    bool operator<(const Node &other) {
        if (freq != other.freq)
            return other.freq < freq;
        else
            return ch < other.ch;
    }
};

int main(int argc, char **argv)
{
    vector<Node> list;
    for (int i = 0; i < 26; i++)
        list.push_back(Node(0, (char)('A' + i)));
    int n;
    char c;
    cin >> noskipws >> n;
    while (cin >> c && c != '\n') ;
    for (int i = 0; i < n; i++) {
        while (cin >> c && c != '\n') {
            if (c >= 'A' && c <= 'Z') {
                list[c - 'A'].freq++;
            }
            else if (c >= 'a' && c <= 'z') {
                list[c - 'a'].freq++;
            }
        }
    }
    sort(list.begin(), list.end());
    for (int i = 0; i < 26 && list[i].freq > 0; i++)
        cout << list[i].ch << " " << list[i].freq << endl;
    return 0;
}

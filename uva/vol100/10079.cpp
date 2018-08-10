// 10070 - Pizza Cutting
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    long n;
    while (cin >> n && n >= 0)
        cout << n * (n + 1) / 2 + 1 << endl;
    return 0;
}

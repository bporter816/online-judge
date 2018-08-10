// 10035 - Primary Arithmetic
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a, b;
    while (cin >> a >> b && !(a == 0 && b == 0)) {
        int total = 0;
        bool isCarry = false;
        while (!(a == 0 && b == 0)) {
            int sum = a % 10 + b % 10 + isCarry;
            isCarry = sum > 9;
            total += isCarry;
            a /= 10;
            b /= 10;
        }
        if (total == 0)
            cout << "No carry operation." << endl;
        else if (total == 1)
            cout << "1 carry operation." << endl;
        else
            cout << total << " carry operations." << endl;
    }
    return 0;
}

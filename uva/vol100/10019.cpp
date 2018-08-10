// 10019 - Funny Encryption Method
#include <iostream>

using namespace std;

int numOneBits(int n) {
    int result = 0;
    while (n != 0) {
        n = n & (n - 1);
        result++;
    }
    return result;
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m, b1, b2 = 0;
        cin >> m;
        b1 = numOneBits(m);
        while (m != 0) {
            int digit = m % 10;
            b2 += numOneBits(digit);
            m /= 10;
        }
        cout << b1 << " " << b2 << endl;
    }
    return 0;
}

// 100 - The 3n + 1 Problem
#include <iostream>
#define swap(i, j) i = i ^ j; j = i ^ j; i = i ^ j;

using namespace std;

int main(int argc, char **argv)
{
    ios_base::sync_with_stdio(false);
    int i, j;
    while (cin >> i >> j) {
        bool swapped = false;
        if (i > j) {
            swap(i, j);
            swapped = true;
        }
        int max = -1;
        for (int k = i; k <= j; k++) {
            long n = k;
            int query = 1;
            while (n != 1) {
                if (n & 1)
                    n = 3 * n + 1;
                else
                    n >>= 1;
                query++;
            }
            if (query > max)
                max = query;
        }
        if (swapped)
            cout << j << " " << i << " " << max << endl;
        else
            cout << i << " " << j << " " << max << endl;
    }
    return 0;
}

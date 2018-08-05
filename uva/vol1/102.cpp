// 102 - Ecological Bin Packing
#include <iostream>
#include <limits.h>

using namespace std;

int main(int argc, char **argv)
{
    ios_base::sync_with_stdio(false);
    int b1, g1, c1, b2, g2, c2, b3, g3, c3;
    while (cin >> b1 >> g1 >> c1 >> b2 >> g2 >> c2 >> b3 >> g3 >> c3) {
        int min = INT_MAX, idx, query;
        query = g2 + g3 + c1 + c3 + b1 + b2;
        if (query <= min) {
            min = query;
            idx = 0;
        }
        query = g2 + g3 + b1 + b3 + c1 + c2;
        if (query <= min) {
            min = query;
            idx = 1;
        }
        query = c2 + c3 + g1 + g3 + b1 + b2;
        if (query <= min) {
            min = query;
            idx = 2;
        }
        query = c2 + c3 + b1 + b3 + g1 + g2;
        if (query <= min) {
            min = query;
            idx = 3;
        }
        query = b2 + b3 + g1 + g3 + c1 + c2;
        if (query <= min) {
            min = query;
            idx = 4;
        }
        query = b2 + b3 + c1 + c3 + g1 + g2;
        if (query <= min) {
            min = query;
            idx = 5;
        }
        switch (idx) {
        case 0:
            cout << "GCB " << min << endl;
            break;
        case 1:
            cout << "GBC " << min << endl;
            break;
        case 2:
            cout << "CGB " << min << endl;
            break;
        case 3:
            cout << "CBG " << min << endl;
            break;
        case 4:
            cout << "BGC " << min << endl;
            break;
        case 5:
            cout << "BCG " << min << endl;
            break;
        }
    }
    return 0;
}

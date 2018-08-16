// Kattis - armystrengthhard
// The input bound is higher. My Python implementation is still fast enough but
// I translated it to C++.
#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int g, m;
        cin >> g >> m;
        int arrG[g], arrM[m];
        for (int j = 0; j < g; j++)
            cin >> arrG[j];
        for (int j = 0; j < m; j++)
            cin >> arrM[j];
        sort(arrG, arrG + g);
        sort(arrM, arrM + m);
        int idxG = 0, idxM = 0;
        while (idxG < g && idxM < m)
            if (arrG[idxG] < arrM[idxM])
                idxG++;
            else
                idxM++;
        if (idxG == g)
            cout << "MechaGodzilla" << endl;
        else
            cout << "Godzilla" << endl;
    }
    return 0;
}

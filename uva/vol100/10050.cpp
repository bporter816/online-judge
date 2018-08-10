// 10050 - Hartals
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int days, parties, total = 0;
        cin >> days >> parties;
        bool arr[days + 1];
        for (int j = 0; j <= days; j++)
            arr[j] = false;
        for (int j = 0; j < parties; j++) {
            int interval;
            cin >> interval;
            for (int k = interval; k <= days; k += interval) {
                if (k % 7 != 0 && k % 7 != 6 && arr[k] == false) {
                    arr[k] = true;
                    total++;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}

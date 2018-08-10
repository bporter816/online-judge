// 10038 - Jolly Jumpers
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int n;
    while (cin >> n) {
        bool arr[n - 1];
        for (int i = 0; i < n; i++)
            arr[i] = false;
        int prev, current, total = 0;
        cin >> prev;
        for (int i = 1; i < n; i++) {
            cin >> current;
            int diff = abs(current - prev);
            if (arr[diff - 1] == false) {
                arr[diff - 1] = true;
                total++;
            }
            prev = current;
        }
        cout << (total == n - 1 ? "Jolly" : "Not jolly") << endl;
    }
    return 0;
}

// Kattis - friday
// Counting the number of Friday the 13ths for a year with m months and d_i days.
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int d, m, ans = 0, totalDays = 0;
        cin >> d >> m;
        for (int j = 0; j < m; j++) {
            int month;
            cin >> month;
            if (month >= 13 && (totalDays + 13) % 7 == 6)
                ans++;
            totalDays += month;
        }
        cout << ans << endl;
    }
    return 0;
}

// 10018 - Reverse and Add
#include <iostream>

typedef long long ll;

using namespace std;

ll reverse(ll num)
{
    ll result = 0;
    while (num > 0) {
        result = result * 10 + num % 10;
        num /= 10;
    }
    return result;
}

bool isPalindrome(ll num)
{
    return num == reverse(num);
}

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll num;
        int total = 0;
        cin >> num;
        while (!isPalindrome(num)) {
            num = num + reverse(num);
            total++;
        }
        cout << total << " " << num << endl;
    }
    return 0;
}

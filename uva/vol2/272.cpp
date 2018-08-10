// 272 - TeX Quotes
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    cin >> noskipws;
    char c;
    int i = 0;
    while (cin >> c)
        if (c == '"') {
            if (i & 1)
                cout << "''";
            else
                cout << "``";
            i++;
        }
        else
            cout << c;
    return 0;
}

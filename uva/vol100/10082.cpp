// 10082 - WERTYU
#include <iostream>
#include <map>

using namespace std;

int main(int argc, char **argv)
{
    map<char, char> m;

    m.insert(map<char, char>::value_type('1', '`'));
    m.insert(map<char, char>::value_type('2', '1'));
    m.insert(map<char, char>::value_type('3', '2'));
    m.insert(map<char, char>::value_type('4', '3'));
    m.insert(map<char, char>::value_type('5', '4'));
    m.insert(map<char, char>::value_type('6', '5'));
    m.insert(map<char, char>::value_type('7', '6'));
    m.insert(map<char, char>::value_type('8', '7'));
    m.insert(map<char, char>::value_type('9', '8'));
    m.insert(map<char, char>::value_type('0', '9'));
    m.insert(map<char, char>::value_type('-', '0'));
    m.insert(map<char, char>::value_type('=', '-'));

    m.insert(map<char, char>::value_type('W', 'Q'));
    m.insert(map<char, char>::value_type('E', 'W'));
    m.insert(map<char, char>::value_type('R', 'E'));
    m.insert(map<char, char>::value_type('T', 'R'));
    m.insert(map<char, char>::value_type('Y', 'T'));
    m.insert(map<char, char>::value_type('U', 'Y'));
    m.insert(map<char, char>::value_type('I', 'U'));
    m.insert(map<char, char>::value_type('O', 'I'));
    m.insert(map<char, char>::value_type('P', 'O'));
    m.insert(map<char, char>::value_type('[', 'P'));
    m.insert(map<char, char>::value_type(']', '['));
    m.insert(map<char, char>::value_type('\\', ']'));

    m.insert(map<char, char>::value_type('S', 'A'));
    m.insert(map<char, char>::value_type('D', 'S'));
    m.insert(map<char, char>::value_type('F', 'D'));
    m.insert(map<char, char>::value_type('G', 'F'));
    m.insert(map<char, char>::value_type('H', 'G'));
    m.insert(map<char, char>::value_type('J', 'H'));
    m.insert(map<char, char>::value_type('K', 'J'));
    m.insert(map<char, char>::value_type('L', 'K'));
    m.insert(map<char, char>::value_type(';', 'L'));
    m.insert(map<char, char>::value_type('\'', ';'));

    m.insert(map<char, char>::value_type('X', 'Z'));
    m.insert(map<char, char>::value_type('C', 'X'));
    m.insert(map<char, char>::value_type('V', 'C'));
    m.insert(map<char, char>::value_type('B', 'V'));
    m.insert(map<char, char>::value_type('N', 'B'));
    m.insert(map<char, char>::value_type('M', 'N'));
    m.insert(map<char, char>::value_type(',', 'M'));
    m.insert(map<char, char>::value_type('.', ','));
    m.insert(map<char, char>::value_type('/', '.'));

    string line;
    while (getline(cin, line)) {
        for (size_t i = 0; i < line.length(); i++) {
            map<char, char>::iterator mapping = m.find(line[i]);
            if (mapping != m.end())
                line[i] = mapping->second;
        }
        cout << line << endl;
    }
    return 0;
}

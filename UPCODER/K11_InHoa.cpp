#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (char c : str)
        cout << (char) toupper(c);
    return 0;
}
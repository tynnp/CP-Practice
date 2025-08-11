#include <iostream>
#include <set>
using namespace std;

int main() {
    string str;
    set<string> s;

    while (cin >> str)
        s.insert(str);

    for (auto c : s)
        cout << c << endl;

    return 0;
}
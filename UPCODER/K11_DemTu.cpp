#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int cnt = 1;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') break;
        if (s[i] == ' ') s.erase(i--, 1);
    }

    for (int i = s.size()-1; i >= 0; i--) {
        if (s[i] != ' ') break;
        if (s[i] == ' ') s.erase(i, 1);
    }

    for (int i = 1; i < s.size(); i++)
        cnt += (s[i-1] != ' ' && s[i] == ' ');

    cout << cnt;
    return 0;
}
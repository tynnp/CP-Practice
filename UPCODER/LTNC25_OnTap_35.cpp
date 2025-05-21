#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (char &c : s) {
        if (islower(c)) c = toupper(c);
        else if (isupper(c)) c = tolower(c);
    }

    cout << s;
    return 0;
}

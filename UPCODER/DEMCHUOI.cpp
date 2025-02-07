#include <iostream>
using namespace std;

int t;
string s, x;

int cnt(string str) {
    if (str.empty())
        return 0;
    
    int res = 0;
    size_t pos = str.find(s);

    while (pos != string::npos) {
        res += 1;
        pos = str.find(s, pos + s.size() - 1);
    }

    return res;
}

int main() {
    cin >> t;
    cin.ignore();
    getline(cin, s);

    while (t--) {
        getline(cin, x);
        cout << cnt(x) << '\n';
    }
    
    return 0;
}
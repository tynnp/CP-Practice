#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n = s.size() + 21;
    
    s.insert(0, 20, ' ');
    s.insert(s.size(), 20, ' ');
    
    for (int i = 0; i < n; i++) {
        cout << "++++++++++++++++++++++\n";
        cout << '+' << s.substr(i, 20) << '+' << '\n';
        cout << "++++++++++++++++++++++";
        if (i < n - 1) cout << '\n';
    }
    
    return 0;
}
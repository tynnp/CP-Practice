#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    s.erase(remove_if(s.begin(), s.end(), [] (char c ) {
        return !isalpha(c);
    }), s.end());
    
    string t = s;
    reverse(t.begin(), t.end());
    cout << (s == t ? "YES" : "NO");
    return 0;
}

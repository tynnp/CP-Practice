#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    s.erase(remove_if(s.begin(), s.end(), [] (char c) {
        return c == 'A' || c == 'a';
    }), s.end());
    
    replace(s.begin(), s.end(), 'u', 'o');
    cout << s;
    return 0;
}
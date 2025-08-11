#include <iostream>
using namespace std;
 
int main() {
    string s; 
    cin >> s;

    while (s[0] == '0' || s[0] == '-')
        s.erase(0, 1);

    while (s[s.size()-1] == '0') 
        s.erase(s.size() - 1, 1);
    
    cout << s.size();
    return 0;
}
#include <iostream>
using namespace std;
 
int main() {
    string s; 
    getline(cin, s); 
    s[0] = toupper(s[0]);

    for (int i = 1; i < s.size(); i++) {
        if (s[i-1] == ' ' && s[i] != ' ') s[i] = toupper(s[i]);
        else if (s[i-1] == ' ') s.erase(--i, 1);
        else s[i] = tolower(s[i]);
    } 
    
    cout << s;
    return 0;
}
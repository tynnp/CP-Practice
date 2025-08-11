#include <iostream>
using namespace std;
 
bool checkChar(char x) {
    if (x >= 'A' && x <= 'Z') return true;
    if (x >= 'a' && x <= 'z') return true;
    return false;
}

int main() {
    int cnt = 0;
    string s; 
    cin >> s; 

    for (int i = 1; i < s.size(); i++)
        if (checkChar(s[i-1]) && !checkChar(s[i])) cnt++;
    if (!checkChar(s[0])) cnt++;
    
    cout << cnt;
    return 0;
}
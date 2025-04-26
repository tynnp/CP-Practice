#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-' || s[i] == '+')
            t += ' ';
        t += s[i];
    }
    
    stringstream ss(t);
    int x;
    
    while (ss >> x) {
        if (x < 0) 
            cout << x << ' ';
    }
    
    return 0;
}
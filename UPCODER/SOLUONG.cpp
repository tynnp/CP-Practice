#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[300];
    fill(a, a + 300, 0);
    string s;
    getline(cin, s);
    
    for (char c : s)
        a[c]++;
        
    for (char c = 'a'; c <= 'z'; c++)
        if (a[c])
            cout << c << ' ' << a[c] << endl;
    
    return 0;
} 
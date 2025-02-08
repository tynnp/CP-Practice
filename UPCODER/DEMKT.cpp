#include <iostream>
using namespace std;

char c;
int a[26];

int main() {
    while (cin >> c)
        a[c - 'a']++;

    for (int i = 0; i < 26; i++) 
        if (a[i]) 
            cout << char(i + 'a') << ':' << a[i] << endl;
    
    return 0;
}
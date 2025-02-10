#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int a[200];
    for (int &x : a) x = 0;

    string str;
    getline(cin, str);

    for (char c : str) 
        a[tolower(c)]++;

    for (char c = 'a'; c <= 'z'; c++)
        if (a[c] > 0) 
            cout << c << " : " << a[c] << endl;
    
    return 0;
}
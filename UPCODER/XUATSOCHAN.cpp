#include <iostream>
using namespace std;

int main() {
    char c;
    
    while (cin >> c) 
        if (c >= '0' && c <= '9' && (c - '0') % 2 == 0) 
            cout << c << ' ';
        
    return 0;
}
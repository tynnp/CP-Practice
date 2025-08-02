#include <iostream>
using namespace std;

int main() {
    char c;
    int ans = 0;
    
    while (cin >> c && c != '#') 
        if (c >= '0' && c <= '9')
            ans += c - '0';
    
    cout << ans;
    return 0;
}
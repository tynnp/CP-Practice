#include <iostream>
using namespace std;

int main() {
    char c, ans = '0';
    
    while (cin >> c && c != '0') 
        ans = max(ans, c);
        
    cout << ans;
    return 0;
}
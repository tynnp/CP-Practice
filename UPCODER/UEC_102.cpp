#include <iostream>
using namespace std;

int main() {
    char x, ans = '0';

    while (cin >> x) 
        ans = max(ans, x);
    
    cout << ans;
    return 0;
}
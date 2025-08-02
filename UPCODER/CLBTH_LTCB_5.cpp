#include <iostream>
using namespace std;

int main() {
    long long n, ans;
    cin >> n;
    
    ans = 1;
    for (int i = 1; i <= n; i++)
        ans *= i; 
    
    cout << ans;
    return 0;
}

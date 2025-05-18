#include <iostream>
using namespace std;

int a(int i) {
    if (i == 0 || i == 1)
        return i;
    
    if (i % 2 == 0)
        return a(i/2);
    else 
        return a(i/2) + a(i/2 + 1);
}

int main() {
    int n, ans = 0;
    cin >> n;

    for (int i = 0; i <= n; i++)
        ans = max(ans, a(i));
    
    cout << ans;
    return 0;
}
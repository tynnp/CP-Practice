#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int k = a/b;
    int ans = b - (a - b*k);
    if (a % b == 0) ans = 0; 
    cout << ans;
    return 0;
}
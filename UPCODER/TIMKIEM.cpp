#include <iostream>
using namespace std;

int n, k, ans;

int main() {
    cin >> k;

    while (cin >> n) 
        if (n == k) 
            ans++;

    cout << (ans ? "TRUE\n" : "FALSE\n") << ans;
    return 0;
}
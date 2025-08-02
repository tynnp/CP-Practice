#include <iostream>
using namespace std;

bool snt(int n) {
    for (int i = 2; i < n; i++) 
        if (n % i == 0)
            return false;
    return n > 1;
}

bool soTL(int n) {
    bool coUoc = false; 

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            coUoc = true;
            if (!snt(i)) 
                return false;
        }
    }

    return coUoc;
}

int main() {
    int n, ans = 0;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < n; i++) 
        ans += soTL(a[i]);

    cout << ans;
    return 0;
}
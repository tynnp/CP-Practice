#include <iostream>
using namespace std;

bool snt(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    int n, ans = 0;
    cin >> n;

    for (int i = 2; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (snt(i) && snt(j) && (i + j) % 3 == 0)
                ans += 1;
    
    cout << ans;
    return 0;
}
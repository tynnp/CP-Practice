#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, s, e, ans = 0;
    cin >> n >> s >> e;

    if (s >= 8 && s <= 24 && n > 0 && e > s && e <= 24) {
        if (s <= 17 && e <= 17) {
            if (e-s > 3) 
                ans = (3*n + (e-s-3)*n*0.7)*0.9;
            else 
                ans = ((e-s)*n)*0.9;

        } else if (s <= 17 && e <= 24) {
            if (17-s > 3) 
                ans = (3*n + (17-s-3)*n*0.7)*0.9;
            else if (17-s <= 3) 
                ans = (17-s)*n*0.9;
            ans += (e-17)*n*0.7;

        } else if (s > 17 && e > 17) {
            if (e-s > 3) 
                ans = 3*n + (e-s-3)*n*0.7;
            else 
                ans = (e-s)*n;
        }

        cout << ans;
    } else 
        cout << -1;

    return 0;
}
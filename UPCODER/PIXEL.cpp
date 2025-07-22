#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int r, cnt = 0; 
    cin >> r;

    for (int x = -r; x <= r; x++) 
        for (int y = -r; y <= r; y++) 
            if (sqrt(x * x + y * y) <= r) 
                cnt++;

    cout << cnt;
    return 0;
}
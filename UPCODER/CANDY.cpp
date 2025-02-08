#include <iostream>
using namespace std;

int main() {
    int n, res = 0;
    cin >> n;

    int a[n];
    for (int &x : a) {
        cin >> x;
        res += x;
    }

    if (res % n == 0) {
        int cnt = 0;
        res /= n;

        for (int x : a) 
            if (x > res) 
                cnt += (x-res);

        cout << cnt;    
    } else 
        cout << -1;

    return 0;
}
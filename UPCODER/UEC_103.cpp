#include <iostream>
using namespace std;

struct ToaDo {
    int x, y;
};

int main() {
    int n;
    cin >> n;

    ToaDo a[n]; 
    for (int i = 0; i < n; i++)
        cin >> a[i].x >> a[i].y;

    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            ans += a[i].y == a[j].y;

    cout << ans;
    return 0;
}
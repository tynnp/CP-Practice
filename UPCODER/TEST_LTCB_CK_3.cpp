#include <iostream>
using namespace std;

struct ToaDo {
    int x, y;
};

int main() {
    int n, cnt = 0;
    cin >> n;
  
    ToaDo a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i].x >> a[i].y;
    
    for (int i = 0; i < n; i++)
        if (a[i].x == 0 || a[i].y == 0)
            cnt++;
    
    cout << cnt;
    return 0;
}
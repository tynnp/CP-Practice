#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int a[n], cnt = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] + a[j] == x)
                cnt++;
    
    cout << cnt;
    return 0;
}
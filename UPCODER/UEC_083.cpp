#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], cnt[201] = {0};
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cnt[a[i]]++;

    for (int i = 0; i <= 200; i++)  
        if (cnt[i] > 0)
            cout << i << ": " << cnt[i] << endl;
    
    return 0;
}
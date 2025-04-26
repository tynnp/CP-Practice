#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool check(int n) {
    return (int) sqrt(n) == sqrt(n);
}

int main() {
    int n, k;
    cin >> n >> k;
    
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int cnt = count_if(a, a + n, [] (int x) {
        return (int) sqrt(x) == sqrt(x);
    });

    cout << cnt << endl;
    cout << (find(a, a + n, k) != a + n ? "Yes" : "No") << endl; 

    int m = n - cnt;
    int *b = new int[m];
    
    copy_if(a, a + n, b, [] (int x) {
        return (int) sqrt(x) != sqrt(x);
    });

    sort(b, b + m);
    for (int i = 0; i < m; i++)
        cout << b[i] << ' ';

    delete[] a;
    delete[] b;
    return 0;
}
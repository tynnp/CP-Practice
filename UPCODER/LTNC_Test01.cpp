#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int* a = new int[n];
    int* b = new int[m];
    int* check = new int[100];
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < m; i++)
        cin >> b[i];
        
    for (int i = 0; i < m; i++)
        check[b[i]] += 1;
    
    for (int i = 0; i < n; i++)
        check[a[i]] = 0;
        
    int ans = 0;
    for (int i = 0; i < 100; i++)
        ans += check[i] > 0;
        
    cout << ans;
    
    delete[] a;
    delete[] b;
    delete[] check;
    return 0;
}
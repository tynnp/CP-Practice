#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    double* a = new double[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    double* ans = a;
    for (int i = 0; i < n; i++) 
        if (*ans < *(a + i))
            *ans = *(a + i);
    
    cout << fixed << setprecision(2);
    cout << "The Largest element is : " << *ans;
    
    delete[] a;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "The elements you entered are :" << endl;
    for (int i = 0; i < n; i++) 
        cout << "element - " << i << " : " << *(a + i) << endl;
    
    delete[] a;
    return 0;
}
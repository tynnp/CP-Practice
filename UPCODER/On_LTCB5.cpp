#include <iostream>
using namespace std;
 
int main() {
    int n; 
    cin >> n;
    int a[n], res = 1;

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    for (int i = 1; i < n; i++) 
        if (a[i - 1] <= a[i]) res++;
        
    cout << res;
    return 0;
}
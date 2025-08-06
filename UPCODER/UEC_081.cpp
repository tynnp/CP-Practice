#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    bool tang = true;
    for (int i = 1; i < n; i++)     
        if (a[i-1] >= a[i])
            tang = false;
    
    cout << boolalpha << tang;
    return 0;
}
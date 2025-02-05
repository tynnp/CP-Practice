#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int a[100];
    
    while (cin >> a[n]) n++;
    
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    
    return 0;
}

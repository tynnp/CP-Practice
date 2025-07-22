#include <iostream>
using namespace std;

int main() {
    int a[10]; 
    for (int i = 0; i < 10; i++) 
        cin >> a[i];

    int k, max = a[0]; 
    for (int i = 0; i < 10; i++) 
        if (max < a[i]) 
            max = a[i], k = i;
        
    cout << k;
    return 0;
}
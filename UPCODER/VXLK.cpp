#include <iostream>
using namespace std;

int n, a[1000];

int main() {
    cin >> n;  
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if(n > 0) {
        cout << a[0];
        for (int i = 1; i < n; i++) 
            if (a[i] != a[i - 1]) 
                cout << " " << a[i];
    }

    return 0;
}
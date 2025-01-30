#include <iostream>
using namespace std;

bool ktDoiXung(int a[], int n) {
    for (int i = 0; i < n/2; i++)
        if (a[i] != a[n-i-1])
            return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    if (ktDoiXung(a, n)) {
        cout << "mang doi xung";
        
    } else {
        cout << "mang khong doi xung\n";
        for (int i = 0; i < n/2; i++)
            if (a[i] != a[n-i-1]) 
                cout << a[i] << ' ' << a[n-i-1] << endl;
    }
    
    delete[] a;
    return 0;
}

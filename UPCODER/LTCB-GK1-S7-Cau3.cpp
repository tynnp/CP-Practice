#include <iostream>
using namespace std;

bool soNguyenTo(int n) {
    for (int i = 2; i < n; i++) 
        if (n % i == 0)
            return false;
    return n > 1;
}

int main() {
    int n, sum = 0;
    cin >> n;
    
    if (n < 2) {
        cout << "NO";
        return 0;
    }
        
    cout << "Tong cac so nguyen to <= " << n << " la: ";
    for (int i = 1; i <= n; i++) {
        if (soNguyenTo(i)) {
            if (sum != 0) 
                cout << " + ";
            cout << i;
            sum += i;
        }
    }
     
    cout << " = " << sum;   
    return 0;
}
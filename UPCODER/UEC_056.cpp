#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool snt = n > 1;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            snt = false;
    
    if (snt)    
        cout << "la so nguyen to";
    else 
        cout << "khong la so nguyen to";
    
    return 0;
}
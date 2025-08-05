#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m = 0;
    for (int i = 1; i < n; i++) 
        if (n % i == 0)
            m += i;
    
    if (n > 0 && n == m) 
        cout << "la so hoan hao";
    else 
        cout << "khong la so hoan hao";
    
    return 0;
}
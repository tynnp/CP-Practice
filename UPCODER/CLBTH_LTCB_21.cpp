#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long res = 0;
    while (n) {
        res += n % 10;
        n /= 10;
    }
    
    if (res % 10 == 3)
        cout << "YES";
    else 
        cout << "NO";
        
    return 0;
}
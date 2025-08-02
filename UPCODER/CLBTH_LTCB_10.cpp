#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    string s;
    
    while (n) {
        s = to_string(n % 2) + s;
        n /= 2;
    }
    
    cout << s;
}

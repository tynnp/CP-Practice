#include <iostream>
using namespace std;

int main() {
    int a, b, tongA = 0, tongB = 0; 
    cin >> a >> b;

    for (int i = 2; i <= a/2; i++)   
        if (a % i == 0) tongA += a%i + a/i;
    
    for (int i = 2; i <= b/2; i++)
        if (b % i == 0) tongB += b%i + b/i;
    
    cout << (++tongA == b && ++tongB == a ? "YES" : "NO");
    return 0;
}
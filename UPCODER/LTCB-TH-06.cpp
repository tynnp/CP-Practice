#include <iostream>
using namespace std;
int gcd(int a,int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a>> b;
    if(gcd(a, b) == 1) cout<<"Yes";
    else cout<<"No";
}
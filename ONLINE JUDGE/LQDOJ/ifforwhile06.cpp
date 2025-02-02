#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double tb = (a*2 + b*2 + c) / 5;
    
    if (tb >= 8)
        cout << "gioi";
    else if (tb >= 6.5)
        cout << "kha banh";
    else if (tb >= 5)
        cout << "trung binh";
    else 
        cout << "yeu";

    return 0;
}
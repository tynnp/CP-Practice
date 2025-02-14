#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    a = a * 1000 + b * 100 + c * 10 + d;

    if (a == 2019) 
        cout << "HAPPY LUNAR NEW YEAR 2019";
    else 
        cout << "It is not 2019";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    double b, c;
    cin >> b >> c;

    double s = b * c * 0.5;
    double h= sqrt(b * b + c * c);

    cout << fixed << setprecision(1);
    cout << "Diện tích: " << s << endl;
    cout << "Độ dài cạnh huyền: " << h;
    return 0;
}
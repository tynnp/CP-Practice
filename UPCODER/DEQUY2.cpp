#include <iostream>
#include <algorithm>
using namespace std;

int n;
string str;

int factorial(int n) {
    if (n < 1) return 1;
    return n * factorial(n-1);
}

void chuoiHoanVi(string str) {
    if (str.length() == n) {
        cout << str << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        string number = to_string(i);
        if (str.find(number) != string::npos) continue;
        chuoiHoanVi(n, str + number);
    }

}

int main() {
    cin >> n;
    cout << factorial(n) << endl;
    chuoiHoanVi(n, str);
    return 0;
}
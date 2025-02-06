#include <iostream>
#include <cmath>
using namespace std;

int n, length;

void chuoiHoanVi(int len, string str) {
    if (len == 0) {
        cout << str << endl;
        return;
    }

    for (int i = 1; i <= n; i++) 
        chuoiHoanVi(len - 1, str + to_string(i));
}

int main() {
    cin >> n >> length;
    cout << pow(n, length) << endl;
    string str = "";
    chuoiHoanVi(length, str);
    return 0;
}
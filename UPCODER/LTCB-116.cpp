// 	1. Nhập vào n 
// 	2.  nếu n không hợp lệ thì cứ xuất ra -1

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; 
    cin >> n;
    cout << (n >= 1 ? n * (n + 1) / 2 : -1);
    return 0;
}
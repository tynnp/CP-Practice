#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    cout << "Mỗi học sinh được chia " << k / n << " quả mận.\n";
    cout << "Số mận dành riêng cho các em nữ là " << k % n << ".";
    return 0;
}
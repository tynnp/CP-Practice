#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;

    if (n <= 0) {
        cout << "Số tiền gửi phải lớn hơn 0.";
        return 0;
    }
        
    double r = 0.05;
    for (int i = 1; i <= 10; i++) { 
        n = n + r * n;
        cout << fixed << setprecision(2) << "Năm " << i << ": " << n << " triệu đồng" << endl;
    }
    
    return 0;
}
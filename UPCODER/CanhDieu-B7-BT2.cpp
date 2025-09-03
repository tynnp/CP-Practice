#include <bits/stdc++.h>
using namespace std;

int main() {
    float w, h;
    cin >> w >> h;
    
    float bmi = w / pow(h, 2);
    
    if (bmi < 18.5)
        cout << "Thiếu cân";
    else if (bmi <= 22.9)
        cout << "Bình thường";
    else
        cout << "Thừa cân";
        
    return 0;
}
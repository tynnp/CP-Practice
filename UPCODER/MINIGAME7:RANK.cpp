#include <iostream>
using namespace std;

int main() {
    int VangVN, BacVN, DongVN, VangTL, BacTL, DongTL, key;
    cin >> VangVN >> BacVN >> DongVN >> VangTL >> BacTL >> DongTL >> key;

    if (key == 1) {
        int sumVN = VangVN + BacVN + DongVN;
        int sumTL = VangTL + BacTL + DongTL;
        if (sumVN > sumTL) cout << "VN";
        else if (sumVN < sumTL) cout << "TL";
        else cout << "TIE";
        
    }  
    
    if (key == 2) {
        if (VangVN == VangTL && BacVN == BacTL && DongVN == DongTL) cout << "TIE";
        else if (VangVN > VangTL) cout << "VN";
        else if (VangVN == VangTL && BacVN > BacTL) cout << "VN";
        else if (VangVN == VangTL && BacVN == BacTL && DongVN > DongTL) cout << "VN";
        else cout << "TL";
    }

    return 0;
}
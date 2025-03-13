#include <iostream>
using namespace std;

int n, x;
int hang[100], cot[100];

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> x;
            hang[i] += x;
            cot[j] += x;
        }
    }
    
    x = hang[0];
    for (int i = 1; i < n; i++) {
        if (hang[i] != x) {
            cout << "Khong phai ma tran deu\n";
            cout << "vi tong cac so hang theo tung hang hoac tung cot khong bang nhau";
            return 0;
        }
    }
    
    for (int j = 0; j < n; j++) {
        if (cot[j] != x) {
            cout << "Khong phai ma tran deu\n";
            cout << "vi tong cac so hang theo tung hang hoac tung cot khong bang nhau";
            return 0;
        }
    }
    
    cout << "Dung ma tran deu\n";
    cout << "vi tong cac so hang theo tung hang hoac tung cot deu bang " << x;
    return 0;
}
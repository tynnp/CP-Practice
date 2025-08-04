#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    char c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(2);
    
    switch (c) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': {
            if (b == 0)
                cout << "Loi chia cho 0";
            else 
                cout << a / b;
        }
    }
    
    return 0;
}
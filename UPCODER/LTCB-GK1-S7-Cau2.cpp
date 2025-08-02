#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int k = n % 10;
    cout << "Nam muoi ";
    
    switch (k) {
        case 1: cout << "mot"; break;
        case 2: cout << "hai"; break;
        case 3: cout << "ba"; break;
        case 4: cout << "bon"; break;
        case 5: cout << "lam"; break;
        case 6: cout << "sau"; break;
        case 7: cout << "bay"; break;
        case 8: cout << "tam"; break;
        case 9: cout << "chin"; break;
    }
    
    return 0;
}
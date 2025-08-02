#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int cnt = a > b ? a : b;
    
    for (int i = 0; i < cnt; i++) 
        cout << "Em xin hua khong gian lan\n";
    
    return 0;
}
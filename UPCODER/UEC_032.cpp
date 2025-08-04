#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if (!(a + b > c && b + c > a && a + c > b)) {
        cout << "Khong phai tam giac";
        return 0;
    }
    
    if (a == b && b == c) {
        cout << "Tam giac deu";
        
    } else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
        cout << "Tam giac vuong";
            
    } else if (a == b || b == c || a == c) {
        cout << "Tam giac can";
        
    } else 
        cout <<"Tam giac thuong";
    
    return 0;
}
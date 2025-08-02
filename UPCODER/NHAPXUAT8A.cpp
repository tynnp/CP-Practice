#include <iostream>
using namespace std;

int main() {
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    if (b[0] == '+') {
        cout << "( " << a << " + " << c << " )^2= " << a << " ^2 + 2 " << a << " " << c<< " + "<< c<< " ^2";
    } else {
        cout << "( " << a << " - " << c << " )^2= " << a << " ^2 - 2 " << a << " " << c<< " + "<< c<< " ^2";
    }
    
    return 0;
}
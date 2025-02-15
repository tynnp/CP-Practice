#include <iostream>
using namespace std;

int main() {
    int n, o, m = 10;
    int* z = &m;
    
    cout << "Pointer: Show the basic declaration of pointer:\n";
    cout << "-------------------------------------------------------\n";
    cout << "Here is m=" << m << ", n and o are two integer variable and *z is an integer\n";
    cout << "z stores the address of m = " << z << '\n';
    cout << "*z stores the value of m = " << *z << '\n';
    cout << "&m is the address of m = " << &m << '\n';
    cout << "&n stores the address of n = " << &n << '\n';
    cout << "&o stores the address of o = " << &o << '\n';
    cout << "&z stores the address of z = " << &z << '\n';
    return 0;
}
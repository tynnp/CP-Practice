#include <iostream>
using namespace std;

int main() {
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    int *ptr_m = &m;
    float *ptr_fx = &fx;
    char *ptr_cht = &cht;

    cout << "Pointer : Demonstrate the use of & and * operator :\n";
    cout << "--------------------------------------------------------\n";
    cout << " m = " << m << "\n";
    cout << " fx = " << fx << "\n";
    cout << " cht = " << cht << "\n\n";
    
    cout << " Using & operator :\n";
    cout << "-----------------------\n";
    cout << " address of m = " << &m << "\n";
    cout << " address of fx = " << &fx << "\n";
    cout << " address of cht = " << (void*)&cht << "\n\n";
    
    cout << " Using & and * operator :\n";
    cout << "-----------------------------\n";
    cout << " value at address of m = " << *(&m) << "\n";
    cout << " value at address of fx = " << *(&fx) << "\n";
    cout << " value at address of cht = " << *(&cht) << "\n\n";
    
    cout << " Using only pointer variable :\n";
    cout << "----------------------------------\n";
    cout << " address of m = " << ptr_m << "\n";
    cout << " address of fx = " << ptr_fx << "\n";
    cout << " address of cht = " << (void*)ptr_cht << "\n\n";
    
    cout << " Using only pointer operator :\n";
    cout << "----------------------------------\n";
    cout << " value at address of m = " << *ptr_m << "\n";
    cout << " value at address of fx= " << *ptr_fx << "\n";
    cout << " value at address of cht= " << *ptr_cht << "\n";
    return 0;
}

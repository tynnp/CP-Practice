#include <bits/stdc++.h>
using namespace std;

int main() {
    int m = 29;
    cout << "Address of m: " << &m << '\n';
    cout << "Value of m: " << m << '\n';
    
    int* ab = &m;
    cout << "Now ab is assigned with the address of m.\n";
    cout << "Address of pointer ab: " << ab << '\n';
    cout << "Content of pointer ab: " << *ab << '\n';
    
    m = 34;
    cout << "The value of m assigned to 34 now.\n";
    cout << "Address of pointer ab: " << ab << '\n';
    cout << "Content of pointer ab: " << *ab << '\n';
    
    *ab = 7;
    cout << "Address of m: " << &m << '\n';
    cout << "Value of m: " << m << '\n';
    return 0;
}
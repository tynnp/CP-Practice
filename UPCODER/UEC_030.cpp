#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 6) 
        cout << "Mien phi";
    else if (n <= 17)
        cout << "40000 VND";
    else if (n <= 59)
        cout << "70000 VND";
    else    
        cout << "30000 VND";
    
    return 0;
}
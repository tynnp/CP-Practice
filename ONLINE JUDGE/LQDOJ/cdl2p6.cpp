#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 18)
        cout << "Ban chua den tuoi bau cu";
    else 
        cout << "Ban da du tuoi bau cu";

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string a, b;
    while (n--) {
        cin >> a >> b;

        if (a == "pcf") 
            continue;
        else 
            cout << b << endl;
    }

    return 0;
}
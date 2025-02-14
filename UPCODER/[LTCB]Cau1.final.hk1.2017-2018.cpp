#include <iostream>
#include <string>
using namespace std;

int n;
string s, x;

int main() {
    cin >> n >> x;
    s = x + "+";
    
    for (int i = 1; i <= n; i++) {
        cin >> x;
        s += x + "x";
        
        if (i != 1) s += "^" + to_string(i);
        if (i != n) s += "+";
    }
    
    cout << s << endl;
    return 0;
}

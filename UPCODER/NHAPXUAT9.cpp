#include <iostream>
using namespace std;

int main() {
    string s; 
    cin >> s;
    int n = s.size();
    cout << (n > 3 ? s[n-4] - 48 : -1);
    return 0;
}
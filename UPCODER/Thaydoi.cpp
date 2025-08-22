#include <iostream>
using namespace std;

int n;

void check(int &x, string s) {
    if (s == "plus1") x++;
    else if (s == "minus1") x--;
    else if (s == "reset") x = n;
    cout << x << " ";
}

int main() {
    cin >> n;
    int m = n;
    string s;
    while (cin >> s) 
        check(m, s);
    return 0;
}
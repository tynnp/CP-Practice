#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s == "keo") 
        cout << "bua";
    else if (s == "bua")
        cout << "bao";
    else 
        cout << "keo";
    
    return 0;
}
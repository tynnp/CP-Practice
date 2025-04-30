#include <iostream>
using namespace std;

int main() {
    string a, b = "";
    getline(cin, a);
    getline(cin, b);
    
    int pos = a.find(b);
    
    if (pos == string::npos) {
        cout << "No";
        return 0;
    }
    
    while (pos != string::npos) {
        cout << "Vi tri: " << pos << endl;
        pos = a.find(b, pos + 1);
        if (pos == a.size()) break;
    }
    
    return 0;
}
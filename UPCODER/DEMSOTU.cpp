#include <iostream>
using namespace std;
 
int main() {
    string s; 
    getline(cin, s);
    int a = 0;
    int b = 0;

    for (char c : s) {
        if (isalpha(c)) a++;
        if (isdigit(c)) b++;
    }
    
    cout << "so chu cai la: " << a << endl;
    cout << "so chu so la: " << b << endl;
    return 0;
}
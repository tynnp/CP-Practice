#include <iostream>
using namespace std;

int main() {
    string s;
    int a, b;
    getline(cin, s);
    cin >> a >> b;

    if (a >= s.size() || b >= s.size()) 
        cout << "gioi han khong dung";
    else for (int i = a; i <= b; i++)
        cout << s[i];
        
    return 0;
}
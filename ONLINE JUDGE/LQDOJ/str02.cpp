#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    string s;
    getline(cin, s);
    for (char c : s) 
        cnt += (c == ' ');
    cout << cnt;
    return 0;
}
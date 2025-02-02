#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int idx = 0;
    for (int i = 0; i < s.size(); i++) 
        if (s[i] == '0')
            idx = i + 1;
    cout << idx;
    return 0;
}
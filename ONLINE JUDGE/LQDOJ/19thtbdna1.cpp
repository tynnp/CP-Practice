#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    string s;
    cin >> s;

    for (char c : s) {
        int x = c - '0';
        cnt += (x & 1);
    }

    cout << cnt;
    return 0;
}
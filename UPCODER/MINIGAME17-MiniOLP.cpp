#include <iostream>
using namespace std;

int main() {
    string s;
    int res = 0, cnt = 0;
    cin >> s;

    for (char c : s) {
        if (toupper(c) == 'D') {
            cnt += 1;
            res += cnt;
        } else cnt = 0;
    }

    cout << res;
    return 0;
}
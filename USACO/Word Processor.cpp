#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k, len = 0;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;

        len += s.length(); 

        if (len <= k) {
            if (len != s.length())
                cout << ' ';
            cout << s;
        } else {
            cout << endl << s;
            len = s.length();
        }
    }

    return 0;
}
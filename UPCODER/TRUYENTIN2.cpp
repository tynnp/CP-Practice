#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n;
    cin.ignore();

    while (n--) {
        string num;
        getline(cin, s);
        stringstream ss(s);
        
        int cnt = 0;
        while (getline(ss, num, '.')) {
            cout << stoi(num, nullptr, 2);
            if (cnt++ < 3)
                cout << '.';
        }

        cout << endl;
    }

    return 0;
}
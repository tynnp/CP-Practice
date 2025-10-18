#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int low = 0, high = 16;

    for (int i = 0; i < 4; i++) {
        int mid = (low + high) / 2;

        cout << "? " << mid << '\n'; 
        cout.flush();

        char res;
        cin >> res; 

        if (res == '=') {
            cout << "! " << mid << '\n';
            cout.flush();
            return 0;
        } else if (res == '<') {
            low = mid + 1;
        } else if (res == '>') {
            high = mid - 1;
        }
    }

    cout << "! " << low << '\n';
    cout.flush();

    return 0;
}
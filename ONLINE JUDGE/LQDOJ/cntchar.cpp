#include <iostream>
using namespace std;

string s;
int cnt, a[300];

int main() {
    cin >> s;
    for (char c : s) a[c - 'a']++;
    for (char c : s) 
        if (a[c - 'a'] == 1)
            cnt++;
    cout << cnt;
    return 0;
}
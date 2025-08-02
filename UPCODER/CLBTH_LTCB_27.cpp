#include <iostream>
using namespace std;

int a[1000];

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
        a[s[i]]++;
        
    int cnt = 0;
    for (int i = 0; i < 1000; i++)
        if (a[i] == 1)
            cnt++;
            
    cout << cnt;
    return 0;
}
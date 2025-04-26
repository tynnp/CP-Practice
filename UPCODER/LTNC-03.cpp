#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s;

    int idx = 0;
    
    copy_if(s.begin(), s.end(), back_inserter(t), [&idx] (char c) {
        return (++idx % 2) == 0;
    });
    
    reverse(t.begin(), t.end());
    cout << t;
    return 0;
}
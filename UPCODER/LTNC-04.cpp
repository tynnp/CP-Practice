#include <iostream>
#include <queue>
using namespace std;

int main() {
    string s = "abcdef";
    queue<char> q;
    int n;
    
    for (int i = 0; i < 6; i++)
        q.push(s[i]);
    
    cin >> n;
    while (n--) {
        char c = q.front();
        q.pop();
        q.push(c);
    }
    
    while (!q.empty()) {
        cout << q.front();
        q.pop();
    }
    
    return 0;
}
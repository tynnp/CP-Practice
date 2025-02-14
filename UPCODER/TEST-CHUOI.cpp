#include <iostream>
using namespace std;

int main() {
    int n, i = 0; 
    cin >> n;
    string s = "I love ";

    while (++i <= n) {
        if (i % 2 == 0 && i > 1) s += "that I hate ";
        else if (i > 1) s += "that I love ";
        if (i == n) s += "it";
    }
    
    cout << s;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    char c;
    string s1; 
    getline(cin, s1);
    cin >> c;

    for (int i = 0; i < s1.size(); i++)
        if (c == s1[i]) cout << i << " ";
    
    return 0;
}
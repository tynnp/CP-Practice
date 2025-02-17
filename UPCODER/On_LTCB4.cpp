#include <iostream>
using namespace std;
 
int main() {
    string s; 
    getline(cin, s);
    int k = s.size(), a = 0;

    while (a < k) {
        int dem = 0; 
        char ch; 
        int i = a;

        for (int j = i; j < k; j++) {
            dem++; 
            ch = s[i];
            if (s[j] != s[j+1]) {
                a = j+1; 
                break;
            }
        }
        cout << dem << ch;
    }

    return 0;
}
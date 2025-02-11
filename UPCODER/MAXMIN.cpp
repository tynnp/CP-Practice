#include <iostream>
using namespace std;

int main() {
    string s; 
    cin >> s;

    int max = s[0] - '0';
    if (max < s[1] - '0') max = s[1] - '0';
    if (max < s[2] - '0') max = s[2] - '0';
    if (max < s[3] - '0') max = s[3] - '0';

    int min = s[0] - '0';
    if (min > s[1] - '0') min = s[1] - '0';
    if (min > s[2] - '0') min = s[2] - '0';
    if (min > s[3] - '0') min = s[3] - '0';

    cout << min + max;
    return 0;
}
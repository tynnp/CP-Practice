#include <bits/stdc++.h>
using namespace std;

double n, x;
string s;
map<char, int> m;

int main() {
    while (cin >> s) 
        for (char c : s) 
            if (isalpha(c))
                m[c]++, n++;

    x = (m['A'] + m['a']) * 100 / n;
    if (x != 0) 
        printf("A: %.4f %%\n", x);
    
    x = (m['E'] + m['e']) * 100 / n;
    if (x != 0) 
        printf("E: %.4f %%\n", x);

    x = (m['I'] + m['i']) * 100 / n;
    if (x != 0) 
        printf("I: %.4f %%\n", x);

    x = (m['O'] + m['o']) * 100 / n;
    if (x != 0) 
        printf("O: %.4f %%\n", x);

    x = (m['U'] + m['u']) * 100 / n;
    if (x != 0) 
        printf("U: %.4f %%\n", x);

    x = (m['Y'] + m['y']) * 100 / n;
    if (x != 0) 
        printf("Y: %.4f %%", x);

    return 0;
}
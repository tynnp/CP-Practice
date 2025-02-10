#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string L[100][100][100];
string s1, s2, s3;
int len1, len2, len3;

string find(string a, string b) {
    if (a.size() > b.size()) return a;
    if (b.size() > a.size()) return b;
        
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) return a;
        else if (a[i] < b[i]) return b;
    }
    
    return a;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s1 >> s2 >> s3; 
    len1 = s1.size(); 
    len2 = s2.size(); 
    len3 = s3.size();
    s1 = ' ' + s1; 
    s2 = ' ' + s2; 
    s3 = ' ' + s3;
    
    for (int i = 0; i <= len1; i++) 
        for (int j = 0; j <= len2; j++) 
            for (int k = 0; k <= len3; k++) 
                if (i == 0 || j == 0 || k == 0) 
                    L[i][j][k] = "";
    
    for (int i = 1; i <= len1; i++) 
        for (int j = 1; j <= len2; j++) 
            for (int k = 1; k <= len3; k++) 
                if (s1[i] == s2[j] && s1[i] == s3[k]) 
                    L[i][j][k] = L[i - 1][j - 1][k - 1] + s1[i];
                else 
                    L[i][j][k] = find(L[i - 1][j][k], find(L[i][j - 1][k], L[i][j][k - 1]));
                
    cout << L[len1][len2][len3];
    return 0;
}
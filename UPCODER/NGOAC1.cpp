#include <iostream>
using namespace std;
 
int main() {
    string s; 
    cin >> s;
    int dem_mo = 0, dem_dong = 0;

    for (int i = 0; i < s.size(); i++) 
        (s[i] == '(') ? dem_mo++ : dem_dong++;

    if (s[0] == ')' || s[s.size() - 1] == '(')
        cout << "FALSE";
    else 
        cout << (dem_mo == dem_dong ? "TRUE" : "FALSE");
        
    return 0;
}
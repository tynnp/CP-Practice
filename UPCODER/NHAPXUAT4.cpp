#include <iostream>
using namespace std;

int main() {
    string str; 
    cin >> str;
    int len = str.size();
    cout << (len < 3 ? -1 : str[len-3]-48);
    return 0;
}
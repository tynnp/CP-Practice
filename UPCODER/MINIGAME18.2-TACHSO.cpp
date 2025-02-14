#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s; 
    vector<string> st; 
    int k = 0;
    
    getline(cin, s);
    istringstream iss(s);

    while (getline(iss, s, ','))
        st.push_back(s);

    int ans = 0;
    for (auto x : st) 
        ans += stoi(x), cout << x << endl; 
    
    cout << ans;
    return 0;
}
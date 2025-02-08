#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s; 
    vector<string> st;
    while (cin >> s) 
        st.push_back(s);

    if (st.size() == 2) 
        cout << st[0] << endl << st[1]; 
    else {
        cout << st[0] << endl;
        for (int i = 1; i < st.size()-1; i++)
            cout << st[i] << " ";
        cout << endl << st.back();
    }
    
    return 0;
}
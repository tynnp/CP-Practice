#include <iostream>
#include <map>
using namespace std;
 
int main() {
    int n; 
    string s; 
    map<string, int> m;
    cin >> n;

    while (n--) {
        cin >> s;
        m[s]++;
    }

    cout << "eke " << m["eke"] << endl;
    cout << "thang " << m["thang"] << endl;
    cout << "dodo " << m["dodo"] << endl;

    return 0;
}
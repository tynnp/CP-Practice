#include <bits/stdc++.h>
using namespace std;

int main(){
    regex check("^[a-zA-Z0-9_.]+(@gmail\\.com|@yahoo\\.com|@yahoo\\.com\\.vn|@hcmup\\.edu\\.vn|@student\\.hcmup\\.edu\\.vn|@live\\.com|@hotmail\\.com|@msn\\.com)$");
    string email;

    while(getline(cin, email)) {
        if(regex_match(email, check))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}

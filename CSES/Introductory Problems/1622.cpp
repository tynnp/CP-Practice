// #include <iostream>
// #include <set>
// using namespace std;

// set<string> ans;
// bool chosen[10];
// string s, permutation;

// void Try() {
//     if (permutation.size() == s.size()) {
//         ans.insert(permutation);
//         return;
//     } 

//     for (int i = 0; i < s.size(); i++) {
//         if (chosen[i])  
//             continue;

//         chosen[i] = true;
//         permutation.push_back(s[i]);
//         Try();
//         chosen[i] = false;
//         permutation.pop_back();
//     }
// }

// int main() {
//     cin.tie(0) -> ios_base::sync_with_stdio(0);
//     cin >> s;
//     Try();

//     cout << ans.size() << '\n';
//     for (string x : ans)
//         cout << x << '\n';
    
//     return 0;
// }

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

string s;
set<string> ans;

int main() {
    cin.tie(0) -> ios_base::sync_with_stdio(0);
    cin >> s;

    sort(s.begin(), s.end());

    do {
        ans.insert(s);
    } while (next_permutation(s.begin(), s.end()));
    
    cout << ans.size() << '\n';
    for (string x : ans)
        cout << x << '\n';
    
    return 0;
}
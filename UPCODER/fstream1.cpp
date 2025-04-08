// #include <iostream>
// using namespace std;

// int main() {
//     freopen("input.txt", "r", stdin);
//     int a, b;
//     cin >> a >> b;
//     cout << a + b;
//     return 0;
// }

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // ifstream fin("input.txt");
    ifstream fin;
    fin.open("input.txt");
    int a, b;
    fin >> a >> b;
    cout << a + b;
    fin.close();
    return 0;
}

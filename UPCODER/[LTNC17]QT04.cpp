#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

int fib[30];
int x, ans = 1;
vector<bool> checkFib(1000000, false);
vector<int> vt, vtFib;

int main() {
    ifstream fin;
    ofstream fout;
    fin.open("DAYSO.INP");
    fout.open("DAYSO.OUT");

    fib[1] = fib[2] = 1;

    for (int i = 3; i < 30; i++)
        fib[i] = fib[i-1] + fib[i-2];

    for (int i = 1; i < 30; i++)
        checkFib[fib[i]] = true;

    
    while (fin >> x) {
        vt.push_back(x);
        if (checkFib[x]) {
            vtFib.push_back(x);
            if (ans < x) ans = x;
        }
    }

    for (int x : vtFib)     
        fout << x << " ";
    fout << endl;

    fout << ans << " ";
    for (int i = 1; i < 30; i++)
        if (fib[i] == ans) fout << i;

    fin.close();
    fout.close();
    return 0;
}
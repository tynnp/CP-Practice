#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

bool checkNumber(string &s) {
    if (s[0] != '0') 
        return false;

    if (s[1] < '0' || s[1] > '9') 
        return false;

    for (int i = 0; i < s.size(); i++)
        if (s[i] < '0' || s[i] > '9') 
            s.erase(i--, 1);

    if (s.size() != 9 && s.size() != 10)
         return false;

    return true;
}

int main() {
    ifstream ifile;
    ofstream ofile;
    ifile.open("BINHLUAN.TXT");
    ofile.open("SDT.TXT");

    vector<string> v;
    string s;

    while (ifile >> s) {
        if (checkNumber(s))
            v.push_back(s);
    }

    if (v.empty()) ofile << "HANG FAKE NEN KHONG AI MUA !";
    else {
        for (int i = 0; i < v.size(); i++)
            ofile << v[i] << endl;
    }

    ifile.close();
    ofile.close();
    return 0;
}
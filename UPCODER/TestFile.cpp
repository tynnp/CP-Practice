#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream ifile;
    ofstream ofile;
    ifile.open("input.txt");
    ofile.open("output.txt");

    int n;
    ifile >> n;

    int a[n];
    for (int &x : a) ifile >> x;
    for (int x : a) ofile << x << endl;

    ifile.close();
    ofile.close();
    return 0;
}
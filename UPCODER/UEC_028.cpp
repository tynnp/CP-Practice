#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int lonNhat = a;
    if (b > lonNhat) lonNhat = b;
    if (c > lonNhat) lonNhat = c;

    int lonNhi = -99999999;
    if (a > lonNhi && a < lonNhat) lonNhi = a;
    if (b > lonNhi && b < lonNhat) lonNhi = b;
    if (c > lonNhi && c < lonNhat) lonNhi = c;

    int nhoNhat = a;
    if (b < nhoNhat) nhoNhat = b;
    if (c < nhoNhat) nhoNhat = c;

    cout << lonNhat << endl << lonNhi << endl << nhoNhat;
    return 0;
}
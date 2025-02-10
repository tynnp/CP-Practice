#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int check(string chuoi) {
    vector<int> numbers;
    istringstream iss(chuoi);
    string s;

    while (getline(iss, s, ',')) 
        numbers.push_back(stoi(s));

    int maxN = *max_element(numbers.begin(), numbers.end());
    int minN = *min_element(numbers.begin(), numbers.end());
    int res = maxN + minN;
    return res;
}

int main() {
    string chuoi;
    getline(cin, chuoi);
    cout << check(chuoi) << endl;
    return 0;
}
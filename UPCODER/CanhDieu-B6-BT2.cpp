#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> tc = {"Giáp ", "Ất ", "Bính ", "Đinh ", "Mậu ", "Kỷ ", "Canh ", "Tân ", "Nhâm ", "Quý "};
vector<string> dc = {"Tý", "Sửu", "Dần", "Mão", "Thìn", "Tỵ", "Ngọ", "Mùi", "Thân", "Dậu", "Tuất", "Hợi"};

int main() {
    cin >> n;
    cout<< n << " là năm " << tc[((n - 4) % 10)] << dc[((n - 4) % 12)];
    return 0;
}
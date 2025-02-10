#include <iostream>
using namespace std;

class Set {
private:
    int *data;      // Con trỏ quản lý các phần tử trong set 
    int size;       // Số phần tử hiện tại của set
    int capa;       // Sức chứa tối đa của set

public:
    Set();                  // Hàm khởi tạo mặc định
    Set(int n);             // Hàm khởi tạo 1 tham số
    Set(int a, int b);      // Hàm khởi tạo 2 tham số
    Set(const Set &other);  // Hàm khởi tạo sao chép
    
    bool Contain(int x);    // Kiểm tra tập hợp có chứa x không
    bool Add(int x);        // Thêm x vào tập hợp
    bool Remove(int x);     // Xóa x khỏi tập hợp

    Set operator & (Set other);     // Phép toán and
    Set operator | (Set other);     // Phép toán or
    friend ostream &operator << (ostream &out, Set set);    // In set
};

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    Set setA(n), setB(a, b);

    cout << (setA | setB) << endl;
    cout << (setA & setB) << endl;
    
    return 0;
}

Set::Set() {
    size = 0;   // Tập rỗng không có phần tử
    capa = 10;  
    data = new int[capa];
}

Set::Set(int n) {
    if (n > 0) {
        size = n;   
        capa = n;
        data = new int[capa];

        // N phần tử giá trị từ 1 đến N
        for (int i = 0; i < n; i++) 
            data[i] = i + 1;
        
    } else {
        size = 0;
        capa = 10;
        data = new int[capa];
    }
}

Set::Set(int a, int b) {
    if (a <= b) {
        size = b - a + 1;
        capa = size;
        data = new int[capa];

        // b - a + 1 phần tử giá trị từ a đến b
        for (int i = 0; i < size; i++) 
            data[i] = a + i;
        
    } else {
        size = 0;
        capa = 10;
        data = new int[capa];
    }
}

Set::Set(const Set &other) {
    size = other.size;
    capa = other.capa;
    data = new int[capa];

    for (int i = 0; i < size; i++) 
        data[i] = other.data[i];
}

bool Set::Contain(int x) {
    for (int i = 0; i < size; i++)
        if (data[i] == x)
            return true;
    return false;
}

bool Set::Add(int x) {
    if (Contain(x)) 
        return false;   // Nếu x đã có trong set thì false
    
    // Nếu set đã đầy thì mở rộng sức chứa
    if (size == capa) {
        capa *= 2;
        int *newdata = new int[capa];

        for (int i = 0; i < size; i++)
            newdata[i] = data[i];

        delete[] data;
        data = newdata;
    }
    
    // Thêm x vào set
    data[size++] = x;
    return true;
}

bool Set::Remove(int x) {
    for (int i = 0; i < size; i++) {
        if (data[i] == x) {
            for (int j = i; j < size - 1; j++)
                data[j] = data[j + 1];

            size--;
            return true;
        }
    }

    return false;
}

// Phép and, trả về set chứa các phần tử có trong cả 2 set
Set Set::operator & (Set other) {
    Set res;
    for (int i = 0; i < size; i++) 
        if (other.Contain(data[i]))
            res.Add(data[i]);
    return res;
}

// Phép or, trả về set chứa các phần tử nằm trong ít nhất 1 set
Set Set::operator | (Set other) {
    Set res = *this;
    for (int i = 0; i < other.size; i++)
        res.Add(other.data[i]);
    return res;
} 

ostream &operator << (ostream &out, Set set) {
    if (set.size == 0) {
        out << "NULL";
        return out;
    }

    // Sắp xếp tăng dần trước khi xuất
    for (int i = 1; i < set.size; i++) {
        int j = i;
        while (j > 0 && set.data[j-1] > set.data[j]) {
            swap(set.data[j-1], set.data[j]);
            j--;
        }
    }

    for (int i = 0; i < set.size; i++)
        out << set.data[i] << " ";
    return out;
}
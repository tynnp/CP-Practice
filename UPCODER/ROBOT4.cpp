#include <iostream>
#include <sstream>
using namespace std;

class Robot {
protected:
    string name;
    string userName;
    int energyLevel;
    int locationX;
    int locationY;

public:
    Robot() {
        name = "Robot";
        userName = "NoName";
        energyLevel = 100;
        locationX = 0;
        locationY = 0;
    }

    Robot(string name, string userName) {
        this->name = name;
        this->userName = userName;
        energyLevel = 100;
        locationX = 0;
        locationY = 0;
    }

    Robot(string name, string userName, int x, int y) {
        this->name = name;
        this->userName = userName;
        energyLevel = 100;
        locationX = x;
        locationY = y;
    }

    Robot(string name, string userName, int energyLevel, int x, int y) {
        this->name = name;
        this->userName = userName;
        this->energyLevel = energyLevel;
        locationX = x;
        locationY = y;
    }

    Robot(const Robot &other) {
        name = other.name;
        userName = other.userName;
        energyLevel = other.energyLevel;
        locationX = other.locationX;
        locationY = other.locationY;
    }

    void Charge() {
        energyLevel += 10;
    }

    virtual bool Move(int direction) {
        if (energyLevel <= 0) return false;
        if (direction < 0 || direction > 3) return false;

        switch (direction) {
            case 0: locationX--; break;
            case 1: locationX++; break;
            case 2: locationY++; break;
            case 3: locationY--; break; 
        }

        energyLevel -= 5;
        return true;
    }

    int getEnergyLevel() {
        return energyLevel;
    }

    void setEnergyLevel(int energyLevel) {
        this->energyLevel = energyLevel;
        return;
    }

    void Display() {
        cout << "{" << name << "}:{" << userName << "}\n";
        cout << "(" << locationX << "," << locationY << ")\n";
        cout << energyLevel << '\n';
        return;
    }
};

class AdaptiveRobot : public Robot {
public: 
    AdaptiveRobot(string name, string userName, int energyLevel, int locationX, int locationY) :
        Robot(name, userName, energyLevel, locationX, locationY) {}

    AdaptiveRobot() {
        name = "AdaptiveRobot";
        userName = "NoName";
        energyLevel = 100;
        locationX = 0;
        locationY = 0;
    }

    bool Move(int direction) {
        if (energyLevel <= 0) return false;
        if (direction < 0 || direction > 3) return false;

        switch (direction) {
            case 0: locationX--; break;
            case 1: locationX++; break;
            case 2: locationY++; break;
            case 3: locationY--; break; 
        }

        return true;
    }
};

int main() {
    int n; 
    cin >> n;
    Robot* danhSach[n];

    string name, userName, diChuyen;
    int energyLevel, locationX, locationY;
    for (int i = 0; i < n; i++) {
        cin >> name; 
        cin.ignore();
        getline(cin, userName);
        cin >> energyLevel >> locationX >> locationY;

        if (name[0] == 'A') 
            danhSach[i] = new AdaptiveRobot(name, userName, energyLevel, locationX, locationY);
        else 
            danhSach[i] = new Robot(name, userName, energyLevel, locationX, locationY);

        cin.ignore();
        getline(cin, diChuyen);
        stringstream ss(diChuyen);

        string tmp; 
        int cnt = 1;
        while (ss >> tmp) {
            if (tmp == "-1") break;

            int number = stoi(tmp);
            if (number == 4) 
                danhSach[i]->Charge();
            else if (name[0] != 'A') 
                danhSach[i]->Move(number);

            else if (danhSach[i]->getEnergyLevel() > 50) {
                danhSach[i]->Move(number);
                ss >> tmp; number = stoi(tmp);
                danhSach[i]->Move(number);
                ss >> tmp; number = stoi(tmp);
                danhSach[i]->Move(number);
                danhSach[i]->setEnergyLevel(danhSach[i]->getEnergyLevel()-12);

            } else if (danhSach[i]->getEnergyLevel() > 20) {
                danhSach[i]->Move(number);
                ss >> tmp; number = stoi(tmp);
                danhSach[i]->Move(number);
                danhSach[i]->setEnergyLevel(danhSach[i]->getEnergyLevel()-9);

            } else {
                danhSach[i]->Move(number);
                danhSach[i]->setEnergyLevel(danhSach[i]->getEnergyLevel()-6);
            }
        }

        danhSach[i]->Display();
    }

    return 0;
}
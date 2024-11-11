#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Screen {
    private:
    int bright;
    int charge;
    
    public:
    Screen(): bright(0), charge(0) {}
    
    void setBrightness(const int newBright) {
        bright = newBright;
    }
    
    void getBrightness() {
        if(bright < 10) {
            cout << "Lower the brightness" << endl;
        } else {
            cout << "Brightness level: " << bright << endl;
        }
    }
    
    void setCharging(const int newCharge) {
        charge = newCharge;
    }
    
    void getCharging() {
        if(charge < 15) {
            cout << "Charge your phone" << endl;
        } else {
            cout << "Charging level: " << charge << "%" << endl;
        }
    }
};

class App {
    private:
    int productive;
    int nonProductive;
    int time;

    public:
    App(): productive(0), nonProductive(0), time(0) {}

    void setProd(const int newProductive, int newNonProductive) {
        productive = newProductive;
        nonProductive = newNonProductive;
    }
    
    void setProd(const int newProductive) {
        productive = newProductive;
    }
    
    void setProd(bool isNonProductive, const int newNonProductive) {
        if (isNonProductive) {
            nonProductive = newNonProductive;
        }
    }

    void getProd() {
        if(productive > nonProductive) {
            cout << "The productivity of your apps is higher" << endl;
        } else {
            cout << "Non-Productive apps are more. Consider uninstalling a few!" << endl;
        }
    }

    void setTime(const int newTime) {
        time = newTime;
    }
    
    int getTime() {
        return time;
    }
};

int main() {
    Screen objScreen;
    cout << "Enter brightness level: ";
    int bright;
    cin >> bright;
    objScreen.setBrightness(bright);
    objScreen.getBrightness();
  
    cout << "Enter charging level: ";
    int charge;
    cin >> charge;
    objScreen.setCharging(charge);
    objScreen.getCharging();

    App objApp;
    cout << "Enter the number of productive apps: ";
    int productive;
    cin >> productive;
    cout << "Enter the number of non-productive apps: ";
    int nonProductive;
    cin >> nonProductive;
    objApp.setProd(productive, nonProductive);
    objApp.getProd();
  
    cout << "Enter screen time (in hours): ";
    int time;
    cin >> time;
    objApp.setTime(time);
    cout << "Screen Time: " << objApp.getTime() << " hours" << endl;

    return 0;
}

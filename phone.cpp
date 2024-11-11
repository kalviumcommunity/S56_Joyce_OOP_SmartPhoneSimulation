#include <iostream>
using namespace std;

class Device {
public:
    virtual void showStatus() = 0;  
    virtual ~Device() {}       
};

class Screen : public Device {
private:
    int bright;
    int charge;

public:
    Screen() : bright(0), charge(0) {}

    void setBrightness(const int newBright) {
        bright = newBright;
    }

    void getBrightness() {
        if (bright < 10) {
            cout << "Lower the brightness" << endl;
        } else {
            cout << "Brightness level: " << bright << endl;
        }
    }

    void setCharging(const int newCharge) {
        charge = newCharge;
    }

    void getCharging() {
        if (charge < 15) {
            cout << "Charge your phone" << endl;
        } else {
            cout << "Charging level: " << charge << "%" << endl;
        }
    }

    void showStatus() override {
        cout << "Screen Status - ";
        getBrightness();
        getCharging();
    }
};

class App : public Device {
private:
    int productive;
    int nonProductive;
    int time;

public:
    App() : productive(0), nonProductive(0), time(0) {}

    void setProd(const int newProductive, int newNonProductive) {
        productive = newProductive;
        nonProductive = newNonProductive;
    }

    void getProd() {
        if (productive > nonProductive) {
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

    void showStatus() override {
        cout << "App Status - ";
        getProd();
        cout << "Screen time: " << getTime() << " hours" << endl;
    }
};

int main() {
    Screen objScreen;
    cout << "Enter brightness level: ";
    int bright;
    cin >> bright;
    objScreen.setBrightness(bright);

    cout << "Enter charging level: ";
    int charge;
    cin >> charge;
    objScreen.setCharging(charge);

    App objApp;
    cout << "Enter the number of productive apps: ";
    int productive;
    cin >> productive;
    cout << "Enter the number of non-productive apps: ";
    int nonProductive;
    cin >> nonProductive;
    objApp.setProd(productive, nonProductive);

    cout << "Enter screen time (in hours): ";
    int time;
    cin >> time;
    objApp.setTime(time);

    Device* devices[2] = {&objScreen, &objApp};
    for (Device* device : devices) {
        device->showStatus();
    }

    return 0;
}

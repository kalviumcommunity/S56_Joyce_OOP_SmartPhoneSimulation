#include <iostream>
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
        if (bright < 10) {
            cout << "lower the brightness" << endl;
        } else {
            cout << bright << endl;
        }
    }

    void setCharging(const int newCharge) {
        charge = newCharge;
    }

    void getCharging() {
        if (charge < 15) {
            cout << "charge your phone" << endl;
        } else {
            cout << charge << endl;
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

    void getProd() {
        if (productive > nonProductive) {
            cout << "The productivity of your apps is more" << endl;
        } else {
            cout << "Non-Productive apps are more uninstall few!" << endl;
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
    // Array of Screen objects
    Screen screens[2];  // Array of 2 Screen objects
    
    for(int i = 0; i < 2; i++) {
        cout << "Screen " << i + 1 << " - Brightness level: ";
        int bright;
        cin >> bright;
        screens[i].setBrightness(bright);
        screens[i].getBrightness();
        
        cout << "Screen " << i + 1 << " - Charging level: ";
        int charge;
        cin >> charge;
        screens[i].setCharging(charge);
        screens[i].getCharging();
    }

    App objApp;
    cout << "No. of Productive apps: ";
    int productive;
    cin >> productive;
    cout << "No. of Non-Productive apps: ";
    int nonProductive;
    cin >> nonProductive;
    objApp.setProd(productive, nonProductive);
    objApp.getProd();
  
    cout << "Screen Time: ";
    int time;
    cin >> time;
    objApp.setTime(time);
    cout << "Total screen time: " << objApp.getTime() << " minutes" << endl;

    return 0;
}

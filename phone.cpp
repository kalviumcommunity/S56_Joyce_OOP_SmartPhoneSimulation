#include <iostream>
using namespace std;

class Screen {
private:
    int bright;
    int charge;
    static int screenCount; 
public:
    Screen() : bright(0), charge(0) {
        screenCount++;
    }

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

    static void showScreenCount() {
        cout << "Total Screens: " << screenCount << endl;
    }
};

int Screen::screenCount = 0; 

class App {
private:
    int productive;
    int nonProductive;
    int time;
    static int appCount; 

public:
    App() : productive(0), nonProductive(0), time(0) {
        appCount++;
    }

    void setProd(const int newProductive, int newNonProductive) {
        productive = newProductive;
        nonProductive = newNonProductive;
    }

    void getProd() {
        if (productive > nonProductive) {
            cout << "The productivity of your apps is more" << endl;
        } else {
            cout << "Non-Productive apps are more, uninstall a few!" << endl;
        }
    }

    void setTime(const int newTime) {
        time = newTime;
    }

    int getTime() {
        return time;
    }

    static void showAppCount() {
        cout << "Total Apps: " << appCount << endl;
    }
};

int App::appCount = 0; 

int main() {
    Screen objScreen1;
    Screen objScreen2;

    cout << "Brightness level: ";
    int bright;
    cin >> bright;
    objScreen1.setBrightness(bright);
    objScreen1.getBrightness();

    cout << "Charging level: ";
    int charge;
    cin >> charge;
    objScreen1.setCharging(charge);
    objScreen1.getCharging();

    Screen::showScreenCount(); 
    cout << "No. of Productive apps: ";
    int productive;
    cin >> productive;
    cout << "No. of Non-Productive apps: ";
    int nonProductive;
    cin >> nonProductive;

    App objApp1;
    objApp1.setProd(productive, nonProductive);
    objApp1.getProd();

    cout << "Screen Time: ";
    int time;
    cin >> time;
    objApp1.setTime(time);
    cout << "Total time: " << objApp1.getTime() << endl;

    App::showAppCount(); 

    return 0;
}

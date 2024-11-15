#include <iostream>
using namespace std;

class Screen {
private:
    int bright;
    int charge;

public:
    Screen() : bright(0), charge(0) {}

    void setBrightness(const int newBright) {
        bright = newBright;
    }

    void getBrightness() const {
        if (bright < 10) {
            cout << "Lower the brightness" << endl;
        } else {
            cout << "Brightness: " << bright << endl;
        }
    }

    void setCharging(const int newCharge) {
        charge = newCharge;
    }

    void getCharging() const {
        if (charge < 15) {
            cout << "Charge your phone" << endl;
        } else {
            cout << "Charge: " << charge << "%" << endl;
        }
    }
};


class ExtendedScreen : public Screen {
private:
    bool darkMode;

public:
    ExtendedScreen() : darkMode(false) {}

    void enableDarkMode() {
        darkMode = true;
        cout << "Dark mode enabled" << endl;
    }

    void disableDarkMode() {
        darkMode = false;
        cout << "Dark mode disabled" << endl;
    }

    void getDarkModeStatus() const {
        cout << "Dark mode is " << (darkMode ? "enabled" : "disabled") << endl;
    }
};

class App {
private:
    int productive;
    int nonProductive;
    int time;

public:
    App() : productive(0), nonProductive(0), time(0) {}

    void setProd(const int newProductive, const int newNonProductive) {
        productive = newProductive;
        nonProductive = newNonProductive;
    }

    void getProd() const {
        if (productive > nonProductive) {
            cout << "The productivity of your apps is more" << endl;
        } else {
            cout << "Non-Productive apps are more, uninstall a few!" << endl;
        }
    }

    void setTime(const int newTime) {
        time = newTime;
    }

    int getTime() const {
        return time;
    }
};

class ExtendedApp : public App {
private:
    int focusTime; 

public:
    ExtendedApp() : focusTime(0) {}

    void setFocusTime(const int newFocusTime) {
        focusTime = newFocusTime;
    }

    void getFocusTime() const {
        cout << "Focus Time: " << focusTime << " minutes" << endl;
    }
};

int main() {

    ExtendedScreen objScreen;
    cout << "Brightness level: ";
    int bright;
    cin >> bright;
    objScreen.setBrightness(bright);
    objScreen.getBrightness();

    cout << "Charging level: ";
    int charge;
    cin >> charge;
    objScreen.setCharging(charge);
    objScreen.getCharging();


    objScreen.enableDarkMode();
    objScreen.getDarkModeStatus();


    ExtendedApp objApp;
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
    cout << "Time Spent on Screen: " << objApp.getTime() << " minutes" << endl;

 
    cout << "Focus Time: ";
    int focusTime;
    cin >> focusTime;
    objApp.setFocusTime(focusTime);
    objApp.getFocusTime();

    return 0;
}

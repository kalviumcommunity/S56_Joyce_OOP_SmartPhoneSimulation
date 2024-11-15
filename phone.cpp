#include <iostream>
using namespace std;

class Screen {
private:
    int bright;
    int charge;

public:
    Screen() : bright(0), charge(0) {}

    virtual void setBrightness(const int newBright) {
        bright = newBright;
    }

    virtual void getBrightness() const {
        if (bright < 10) {
            cout << "Lower the brightness" << endl;
        } else {
            cout << "Brightness: " << bright << endl;
        }
    }

    virtual void setCharging(const int newCharge) {
        charge = newCharge;
    }

    virtual void getCharging() const {
        if (charge < 15) {
            cout << "Charge your phone" << endl;
        } else {
            cout << "Charge: " << charge << "%" << endl;
        }
    }
};

class AdvancedScreen : public Screen {
private:
    bool powerSavingMode;

public:
    AdvancedScreen() : powerSavingMode(false) {}

    void enablePowerSavingMode() {
        powerSavingMode = true;
        cout << "Power-saving mode enabled" << endl;
    }

    void disablePowerSavingMode() {
        powerSavingMode = false;
        cout << "Power-saving mode disabled" << endl;
    }

    void getPowerSavingModeStatus() const {
        cout << "Power-saving mode is " << (powerSavingMode ? "enabled" : "disabled") << endl;
    }
};

class App {
private:
    int productive;
    int nonProductive;
    int time;

public:
    App() : productive(0), nonProductive(0), time(0) {}

    virtual void setProd(const int newProductive, const int newNonProductive) {
        productive = newProductive;
        nonProductive = newNonProductive;
    }

    virtual void getProd() const {
        if (productive > nonProductive) {
            cout << "The productivity of your apps is more" << endl;
        } else {
            cout << "Non-Productive apps are more, uninstall a few!" << endl;
        }
    }

    virtual void setTime(const int newTime) {
        time = newTime;
    }

    virtual int getTime() const {
        return time;
    }
};

class AdvancedApp : public App {
private:
    int totalUsageTime;

public:
    AdvancedApp() : totalUsageTime(0) {}

    void setTotalUsageTime(const int newUsageTime) {
        totalUsageTime = newUsageTime;
    }

    void getTotalUsageTime() const {
        cout << "Total Usage Time: " << totalUsageTime << " minutes" << endl;
    }
};

int main() {

    Screen* screen = new AdvancedScreen();
    cout << "Brightness level: ";
    int bright;
    cin >> bright;
    screen->setBrightness(bright);
    screen->getBrightness();

    cout << "Charging level: ";
    int charge;
    cin >> charge;
    screen->setCharging(charge);
    screen->getCharging();

    AdvancedScreen* advScreen = dynamic_cast<AdvancedScreen*>(screen);
    if (advScreen) {
        advScreen->enablePowerSavingMode();
        advScreen->getPowerSavingModeStatus();
    }

    App* app = new AdvancedApp();
    cout << "No. of Productive apps: ";
    int productive;
    cin >> productive;
    cout << "No. of Non-Productive apps: ";
    int nonProductive;
    cin >> nonProductive;
    app->setProd(productive, nonProductive);
    app->getProd();

    cout << "Screen Time: ";
    int time;
    cin >> time;
    app->setTime(time);
    cout << "Time Spent on Screen: " << app->getTime() << " minutes" << endl;

    AdvancedApp* advApp = dynamic_cast<AdvancedApp*>(app);
    if (advApp) {
        cout << "Total Usage Time: ";
        int usageTime;
        cin >> usageTime;
        advApp->setTotalUsageTime(usageTime);
        advApp->getTotalUsageTime();
    }


    delete screen;
    delete app;
    return 0;
}

#include <iostream>
using namespace std;

class Screen {
private:
    int brightness;
    int chargeLevel;

public:
    Screen() : brightness(0), chargeLevel(0) {}

    void setBrightness(const int newBrightness) {
        brightness = newBrightness;
    }

    int getBrightness() const {
        return brightness;
    }

    void setChargeLevel(const int newChargeLevel) {
        chargeLevel = newChargeLevel;
    }

    int getChargeLevel() const {
        return chargeLevel;
    }

    void checkBrightness() const {
        if (brightness < 10) {
            cout << "Lower the brightness" << endl;
        } else {
            cout << "Brightness is: " << brightness << endl;
        }
    }

    void checkCharge() const {
        if (chargeLevel < 15) {
            cout << "Charge your phone" << endl;
        } else {
            cout << "Charge level is: " << chargeLevel << "%" << endl;
        }
    }
};

class App {
private:
    int productiveApps;
    int nonProductiveApps;
    int screenTime;

public:

    App() : productiveApps(0), nonProductiveApps(0), screenTime(0) {}

    void setAppUsage(int prod, int nonProd) {
        productiveApps = prod;
        nonProductiveApps = nonProd;
    }

    void setScreenTime(const int time) {
        screenTime = time;
    }

    int getScreenTime() const {
        return screenTime;
    }

    void evaluateAppUsage() const {
        if (productiveApps > nonProductiveApps) {
            cout << "The productivity of your apps is more." << endl;
        } else {
            cout << "Non-Productive apps are more, consider uninstalling a few!" << endl;
        }
    }

    void displayScreenTime() const {
        cout << "Screen time is: " << screenTime << " hours." << endl;
    }
};

int main() {
    Screen screenObj;
    App appObj;

    int brightness, charge;
    cout << "Enter brightness level: ";
    cin >> brightness;
    screenObj.setBrightness(brightness);
    screenObj.checkBrightness();

    cout << "Enter charging level: ";
    cin >> charge;
    screenObj.setChargeLevel(charge);
    screenObj.checkCharge();

    int productive, nonProductive, time;
    cout << "Enter the number of productive apps: ";
    cin >> productive;
    cout << "Enter the number of non-productive apps: ";
    cin >> nonProductive;
    appObj.setAppUsage(productive, nonProductive);
    appObj.evaluateAppUsage();

    cout << "Enter screen time (in hours): ";
    cin >> time;
    appObj.setScreenTime(time);
    appObj.displayScreenTime();

    return 0;
}

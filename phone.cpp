#include <iostream>
using namespace std;

class Screen {
private:
    int bright;
    int charge;

public:
    Screen(int initBright, int initCharge) : bright(initBright), charge(initCharge) {
        cout << "Screen object created with Brightness: " << bright << " and Charge: " << charge << "%" << endl;
    }

    ~Screen() {
        cout << "Screen object destroyed" << endl;
    }

    void setBrightness(const int newBright) {
        bright = newBright;
    }

    void getBrightness() {
        if (bright < 10) {
            cout << "Lower the brightness" << endl;
        } else {
            cout << "Brightness is: " << bright << endl;
        }
    }

    void setCharging(const int newCharge) {
        charge = newCharge;
    }

    void getCharging() {
        if (charge < 15) {
            cout << "Charge your phone" << endl;
        } else {
            cout << "Charge level is: " << charge << "%" << endl;
        }
    }
};

class App {
private:
    int productive;
    int nonProductive;
    int time;

public:

    App(int initProductive, int initNonProductive, int initTime) 
        : productive(initProductive), nonProductive(initNonProductive), time(initTime) {
        cout << "App object created with Productive apps: " << productive 
             << ", Non-Productive apps: " << nonProductive 
             << ", and Screen Time: " << time << " hours" << endl;
    }

    ~App() {
        cout << "App object destroyed" << endl;
    }

    void setProd(const int newProductive, const int newNonProductive) {
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

    void displayScreenTime() {
        cout << "Screen time is: " << time << " hours." << endl;
    }
};

int main() {
    // Create Screen object using constructor
    int brightness, charge;
    cout << "Enter brightness level: ";
    cin >> brightness;
    cout << "Enter charging level: ";
    cin >> charge;
    Screen objScreen(brightness, charge);
    
    // Screen operations
    objScreen.getBrightness();
    objScreen.getCharging();

    // Create App object using constructor
    int productive, nonProductive, time;
    cout << "Enter the number of productive apps: ";
    cin >> productive;
    cout << "Enter the number of non-productive apps: ";
    cin >> nonProductive;
    cout << "Enter screen time (in hours): ";
    cin >> time;
    App objApp(productive, nonProductive, time);
    
    // App operations
    objApp.getProd();
    objApp.displayScreenTime();

    // Main function ends, destructors will be called automatically
    return 0;
}

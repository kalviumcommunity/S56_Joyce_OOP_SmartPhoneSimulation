#include <iostream>
#include <string>
using namespace std;

class Device {
    protected:
    string modelName;

    public:
    Device(): modelName("") {}

    void setModelName(const string& newModelName) {
        modelName = newModelName;
    }

    void getModelName() const {
        cout << "Device Model: " << modelName << endl;
    }
};

class Screen : public Device {
    private:
    int bright;
    int charge;
    
    public:
    Screen(): bright(0), charge(0) {}

    void setBrightness(const int newBright) {
        bright = newBright;
    }

    void getBrightness() const {
        if(bright < 10) {
            cout << "Lower the brightness" << endl;
        } else {
            cout << "Brightness: " << bright << endl;
        }
    }

    void setCharging(const int newCharge) {
        charge = newCharge;
    }

    void getCharging() const {
        if(charge < 15) {
            cout << "Charge your phone" << endl;
        } else {
            cout << "Charging level: " << charge << endl;
        }
    }
};

class App {
    private:
    int productive;
    int nonProductive;

    public:
    App(): productive(0), nonProductive(0) {}

    void setProd(const int newProductive, const int newNonProductive) {
        productive = newProductive;
        nonProductive = newNonProductive;
    }

    void getProd() const {
        if(productive > nonProductive) {
            cout << "The productivity of your apps is more" << endl;
        } else {
            cout << "Non-productive apps are more, uninstall a few!" << endl;
        }
    }
};

class SmartPhone : public App {
    private:
    int screenTime;

    public:
    SmartPhone(): screenTime(0) {}

    void setTime(const int newTime) {
        screenTime = newTime;
    }

    void getTime() const {
        cout << "Screen Time: " << screenTime << " hours" << endl;
    }

    void overallDeviceStatus() const {
        if(screenTime > 5) {
            cout << "You have been using the phone for too long!" << endl;
        } else {
            cout << "Usage is under control." << endl;
        }
    }
};

int main() {

    Screen objScreen;
    objScreen.setModelName("Galaxy S21");
    objScreen.getModelName();

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


    SmartPhone objSmartPhone;

    cout << "Enter the number of productive apps: ";
    int productive;
    cin >> productive;
  
    cout << "Enter the number of non-productive apps: ";
    int nonProductive;
    cin >> nonProductive;
    objSmartPhone.setProd(productive, nonProductive);
    objSmartPhone.getProd();
  
    cout << "Enter screen time in hours: ";
    int time;
    cin >> time;
    objSmartPhone.setTime(time);
    objSmartPhone.getTime();
    objSmartPhone.overallDeviceStatus();
  
    return 0;
}

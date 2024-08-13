#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Screen{
    private:
    int bright;
    int charge;
    
    public:
    Screen(): bright(0),charge(0){}
    
    void setBrightness(const int newBright){
        this->bright=newBright;
    }
    
    void getBrightness(){
        if(this->bright<10){
            cout<<"lower the brightness"<<endl;
        }
        else{
            cout<<this->bright<<endl;
        }
    }
    
    void setCharging(const int newCharge){
        this->charge=newCharge;
    }
    
    void getCharging(){
        if(this->charge<15){
            cout<<"charge your phone"<<endl;
        }
        else{
            cout<<this->charge<<endl;
        }
    }
};

class App{
    private:
    int productive;
    int nonProductive;
    int time;

    public:
    App(): productive(0),nonProductive(0),time(0){}

    void setProd(const int newProductive, int newNonProductive){
        this->productive=newProductive;
        this->nonProductive=newNonProductive;
    }

    void getProd(){
        if(this->productive>this->nonProductive){
            cout<<"The productivity of your apps is more"<<endl;
        }
        else{
            cout<<"Non-Productive apps are more uninstall few!"<<endl;
        }
    }

    void setTime(const int newTime){
        this->time=newTime;
    }
    int getTime(){
        return this->time;
    }
};

int main() {
  // Enter your code below
  Screen objScreen;
  cout<<"Brightness level:";
  int bright;
  cin>>bright;
  objScreen.setBrightness(bright);
  objScreen.getBrightness();
  
  cout<<"Charging level:";
  int charge;
  cin>>charge;
  objScreen.setCharging(charge);
  objScreen.getCharging();

  cout<<"No. of Productive apps:";
  int productive;
  cin>>productive;
  cout<<"No. of NonProductive apps:";
  int nonProductive;
  cin>>nonProductive;
  App objApp;
  objApp.setProd(productive,nonProductive);
  objApp.getProd();
  
  cout<<"Screen Time:";
  int time;
  cin>>time;
  objApp.setTime(time);
  objApp.getTime();
  return 0;
}
//WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.
#include <iostream>
using namespace std;
class time{
	public:
	int time;
    int hour;
    int min;
    int sec;
};
 
int main(){   
    time t1;
    cout << "Enter a time in seconds: ";
    cin >> t1.time;
 
   
    t1.hour = t1.time/3600;
    t1.time = t1.time%3600;
    t1.min = t1.time/60;
    t1.time = t1.time%60;
    t1.sec = t1.time;
 
    
    cout <<t1.hour<<" hours "<<t1.min<<" minutes " << t1.sec <<" seconds";
 
    return 0;
}

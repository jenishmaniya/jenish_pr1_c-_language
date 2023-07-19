//WAP to create a class to read and add two times.
#include<iostream>
using namespace std;

class time{
	public:
		int hours;
		int min;
		int sec;
};
int main(){
	time t1,t2,sum;
	int extra1,extra2;
	
	
	cout << "Enter the first time:" << endl;
	cout << "Enter the hours:";
	cin >> t1.hours;
	cout << "Enter the min:";
	cin >> t1.min;
	cout << "Enter the sec:";
	cin >> t1.sec;
	
	cout << "Enter the second time:" << endl;
	cout << "Enter the hours:";
	cin >> t2.hours;
	cout << "Enter the min:";
	cin >> t2.min;
	cout << "Enter the sec:";
	cin >> t2.sec;
	
	sum.hours=t1.hours+t2.hours;
	sum.min=t1.min+t2.min;
	sum.sec=t1.sec+t1.sec;
	
if(sum.sec > 60) {
        
    extra1=sum.sec/60;

    sum.min += extra1;
    sum.sec -=(extra1*60);
    }else if(sum.min > 60) {
        
    extra2=sum.min/60;

    sum.hours += extra2;
    sum.min -=(extra2*60);
    cout << endl << "Sum of time = " << sum.hours << " hours " << sum.min << " min " << sum.sec << " sec";
}
	
	
	return 0;
	
}

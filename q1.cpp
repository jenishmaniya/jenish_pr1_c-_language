// WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch).
#include<iostream>
using namespace std;

class height{
	public:
		int inch;
		int feet;
};
int main(){
	height h1,h2,sum;
	int extra;
	
	cout << "Enter the height of first person:" << endl;
	cout << "Enter the feet:";
	cin >> h1.feet;
	cout << "Enter the inch:";
	cin >> h1.inch;
	
	cout << "Enter the height of second person:" << endl;
	cout << "Enter the feet:";
	cin >> h2.feet;
	cout << "Enter the inch:";
	cin >> h2.inch;
	
	sum.feet=h1.feet+h2.feet;
	sum.inch=h1.inch+h2.inch;
	
if(sum.inch > 12) {
        
    extra=sum.inch/12;

    sum.feet += extra;
    sum.inch -=(extra*12);
    } 
	cout << endl << "Sum of distances = " << sum.feet << " feet  " << sum.inch << " inches";
	
	return 0;
}

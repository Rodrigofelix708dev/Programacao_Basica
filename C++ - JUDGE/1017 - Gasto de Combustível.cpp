#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double af=12,l, kmh, d;
	cin >>l >> kmh;
	d= (l*kmh)/af;
	cout << fixed << setprecision(3);
cout << d << endl;
	}
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	double n1, n2, n3, a =2.0, b =3.0, c =5.0, me, B;
	cin >> n1 >> n2 >> n3;
	me = (n1*a)+(n2*b)+(n3*c);
	B = me/10;
	cout << fixed << setprecision(1);
	cout << "MEDIA = " << B << endl;
	
}
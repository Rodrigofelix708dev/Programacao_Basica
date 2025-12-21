#include <iostream>
#include <iomanip>
using namespace std;
int main (){
double N, a, b, c, d, e, f;
	 cin >> N;
	 cout << fixed << setprecision(2);
	if(N>0 && N<=2000){
		cout << "Isento" << endl;
	}else if(N>2000 && N<=3000){
		a = N-2000;
		c = a*8/100;
		cout << "R$ " << c << endl;
		
	}else if(N>3000 && N<=4500){
		a = N-3000;
		c = 1000*8/100;
		d = (a*18)/100;
		cout << "R$ " << c+d << endl;

	}else if(N>4500){
		a = N-4500;
		c = 1000*8/100;
		d = (1500*18)/100;
		e = (a*28)/100;
		cout << "R$ " << c+d+e << endl;
	}
}

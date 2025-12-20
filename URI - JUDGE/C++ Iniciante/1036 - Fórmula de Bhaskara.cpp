#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
double a,b,c,raizp=0,raizn=0;
cin >> a >> b >> c;
	raizp = (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a);
	raizn = (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);
	if(pow(b,2)-(4*a*c)<0 || a==0){
	cout <<"Impossivel calcular" << endl;
	}
	else{
			cout << fixed << setprecision(5);
	cout << "R1 = " << raizp << endl;
	cout << "R2 = " << raizn << endl;
	}
}

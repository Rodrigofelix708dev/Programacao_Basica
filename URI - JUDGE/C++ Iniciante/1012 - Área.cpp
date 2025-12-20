#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double a,b,c,pi=3.14159, atr, acr, at, aq, art;
	cin >> a >>b >>c;
atr=(a*c)/2;
acr=(c*c)*pi;
at=((a+b)*c)/2;
aq=b*b;
art=a*b;
	cout << fixed << setprecision(3);
	cout << "TRIANGULO: " << atr << endl;
	cout << "CIRCULO: " << acr << endl;
	cout << "TRAPEZIO: " << at << endl;
	cout << "QUADRADO: " << aq << endl;
	cout << "RETANGULO: " << art << endl;

}
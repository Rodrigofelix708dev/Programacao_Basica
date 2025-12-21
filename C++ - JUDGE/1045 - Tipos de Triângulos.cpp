#include <bits/stdc++.h>
using namespace std;
int main (){
	double a,b,c,aux;
	cin >> a >> b >> c;
	if(a<b){
		aux = b;
		b = a;
		a = aux;
	}
	if(a<c){
		aux = c;
		c = a;
		a = aux;
	}
	if(b<c){
		aux = c;
		c = b;
		b = aux;
	}
	if(a>=(b+c)){
		cout << "NAO FORMA TRIANGULO" << endl;
		return 0;
	}
	if((a*a)==(b*b)+(c*c)){
		cout << "TRIANGULO RETANGULO" << endl;
	}
	if((a*a)>(b*b)+(c*c)){
		cout << "TRIANGULO OBTUSANGULO" << endl;
	}
	if((a*a)<(b*b)+(c*c)){
		cout << "TRIANGULO ACUTANGULO" << endl;
	}
	if(a==b and a==c){
		cout << "TRIANGULO EQUILATERO" << endl;
	}
	if(a==b and a!=c){
		cout << "TRIANGULO ISOSCELES" << endl;
	}
	else if(a==c and a!=b){
		cout << "TRIANGULO ISOSCELES" << endl;
	}
	else if(b==c and a!=b){
		cout << "TRIANGULO ISOSCELES" << endl;
	}
}
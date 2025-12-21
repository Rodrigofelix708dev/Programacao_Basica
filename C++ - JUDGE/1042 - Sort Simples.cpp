#include <bits/stdc++.h>
using namespace std;
int main (){
	 int a,b,c;
	 int a1,b2,c3,aux;
	 cin >> a >> b >> c;
	 a1=a;
	 b2=b;
	 c3=c;
	 if(a>b){
	 	aux = a;
	 	a = b;
	 	b = aux;
	 }
	 if(a>c){
	 	aux = a;
	 	a = c;
	 	c = aux;
	 }
	 if(b>c){
	 	aux = b;
	 	b = c;
	 	c = aux;
	 }
	 cout << a << endl << b << endl << c << endl << endl;
	 cout << a1 << endl << b2 << endl << c3 << endl;
}
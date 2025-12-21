#include <iostream>
using namespace std;
int main (){
long long N, a, b, c, d;
	 cin >> N;
		if(N>100){
		a = N-10;
		b = a-20;
		c = b-70;
		d = 7+20+70*2+c*5;
		cout << d << endl; 
		}if(N>30 and N<=100){
		a = N-10;
		b = a-20;
		c = 7+20+b*2;
		cout << c << endl;
		}if(N>10 and N<=30){
		a = N-10;
		b = 7+a;
		cout << b << endl;
		}if (N<=10){
		cout << 7 << endl; 
	}
}

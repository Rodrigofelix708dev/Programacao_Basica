#include <iostream>
#include <string>
using namespace std;
int main (){
	long long n,v1,v2;
	string jog1,jog2,esj1,esj2;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> jog1 >> esj1;
		cin>> jog2 >> esj2;
		cin >> v1 >>v2;
		if((v1+v2)%2==0 and esj1=="PAR"){
			cout << jog1 << endl;
		}
		if((v1+v2)%2==0 and esj2=="PAR"){
			cout << jog2 << endl;
		}
		if((v1+v2)%2!=0 and esj1=="IMPAR"){
			cout << jog1 << endl;
		}
		if((v1+v2)%2!=0 and esj2=="IMPAR"){
			cout << jog2 << endl;
		}
	}
}
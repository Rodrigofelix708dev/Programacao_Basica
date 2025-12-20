#include <bits/stdc++.h>
using namespace std;
int main (){
	double n,n1,id=1;
	while(cin >> n,n<0 or n>10){
		cout << "nota invalida" << endl;
	}
	while(cin >> n1,n1<0 or n1>10){
		cout << "nota invalida" << endl;
	}
	while(id==1){
		cout << fixed << setprecision(2);
		cout << "media = " <<(n+n1)/2 << endl;
		cout << "novo calculo (1-sim 2-nao)" << endl;
		while(cin >> id,id>2 or id<1){
		cout << "novo calculo (1-sim 2-nao)" << endl;
		}
		if(id==1){
			while(cin >> n,n<0 or n>10){
			cout << "nota invalida" << endl;
			}
			while(cin >> n1,n1<0 or n1>10){
				cout << "nota invalida" << endl;
			}
		}
		else{
			return 0;
		}
	}
}
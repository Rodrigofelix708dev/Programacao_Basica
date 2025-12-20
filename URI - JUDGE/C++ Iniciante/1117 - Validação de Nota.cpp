#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double n=0,n1=0,sum=0;
	cout << fixed << setprecision(2);
	while(cin >> n, n<0.0 || n>10.0){
		cout << "nota invalida" << endl;
	}
	while(cin >> n1, n1<0.0 || n1>10.0){
		cout << "nota invalida" << endl;
	}
	sum=n+n1;
	cout << "media = " << sum/2.0 << endl;
}
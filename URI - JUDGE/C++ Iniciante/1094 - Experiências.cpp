#include <iostream>
#include <iomanip>
using namespace std;
int main () {
double  pr=0, ps=0, pc=0;
long long a, n, qt=0,qts=0, qtr=0, qtclh=0;
char tipo(1);
cin >> a;
for(int i=0;i<a;i++){
	cin >> n >> tipo;
	if(tipo=='S'){
		qt +=n;
		qts +=n;
	}else if(tipo=='R'){
		qt +=n;
		qtr +=n;
	}else if(tipo=='C'){
		qt +=n;
		qtclh +=n;
	}
}
cout << "Total: "<< qt << " cobaias" << endl;
cout << "Total de coelhos: " << qtclh << endl;
cout << "Total de ratos: " << qtr << endl;
cout << "Total de sapos: " << qts << endl;

cout << fixed << setprecision(2);
cout << "Percentual de coelhos: " << (double)(qtclh*100)/qt << " %" << endl;
cout << "Percentual de ratos: " << (double)(qtr*100)/qt << " %" << endl;
cout << "Percentual de sapos: " << (double)(qts*100)/qt << " %" << endl;
}
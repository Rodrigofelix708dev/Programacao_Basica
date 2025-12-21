#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	long long n,cont=0;
	double media=0,sum=0;
	while(cin >> n,n>0){
		cont++;
		sum+=n;
	}
	media=sum/cont;
	cout << fixed << setprecision(2);
	cout << media << endl;

}
#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double a,b,c,hip=0;
	cin >> a >> b >> c;
	if(a>hip){
		hip=a;
	}
	if(b>hip){
		hip=b;
	}
	if(c>hip){
		hip=c;
	}
	cout << fixed << setprecision(1);

	if((a+b+c)-hip > hip){
		cout << "Perimetro = " << a+b+c << endl;
		
	}
	else{
		cout << "Area = " << ((a+b)*c)/2 << endl;
	}
}

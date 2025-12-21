#include <iostream>
using namespace std;
int main (){
	int n,a=0,g=0,d=0;
	
	while(cin >> n, n!=4){
		if(n==1){
			a++;
		}
		else if(n==2){
			g++;
		}
		else if(n==3){
			d++;
		}
	}
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << a << endl;
	cout << "Gasolina: " << g << endl;
	cout << "Diesel: " << d << endl;
}
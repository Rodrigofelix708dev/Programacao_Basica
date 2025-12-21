#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double din,mo;
	int a,b,c;
	cin >> din;
	a=din;
	
	cout << "NOTAS:" << endl;
	cout << a/100 <<" nota(s) de R$ 100.00" << endl;
	cout << (a%100)/50 <<" nota(s) de R$ 50.00" << endl;
	cout << ((a%100)%50)/20 <<" nota(s) de R$ 20.00" << endl;
	cout << (((a%100)%50)%20)/10 <<" nota(s) de R$ 10.00" << endl;
	cout << ((((a%100)%50)%20)%10)/5 <<" nota(s) de R$ 5.00" << endl;
	cout << (((((a%100)%50)%20)%10)%5)/2 <<" nota(s) de R$ 2.00" << endl;



	cout << "MOEDAS:" << endl;

	mo = (din-a)*1000;
	b = mo;
		if(b==mo){
	cout << (((((a%100)%50)%20)%10)%5)%2 <<" moeda(s) de R$ 1.00" << endl; 
	cout << b/500 << " moeda(s) de R$ 0.50" << endl;
	cout << (b%500)/250 << " moeda(s) de R$ 0.25" << endl;
	cout << ((b%500)%250)/100 << " moeda(s) de R$ 0.10" << endl;
	cout << (((b%500)%250)%100)/50 << " moeda(s) de R$ 0.05" << endl;
	cout << ((((b%500)%250)%100)%50)/10 << " moeda(s) de R$ 0.01" << endl;
}
else {
	b=mo+1;
	cout << (((((a%100)%50)%20)%10)%5)%2 <<" moeda(s) de R$ 1.00" << endl; 
	cout << b/500 << " moeda(s) de R$ 0.50" << endl;
	cout << (b%500)/250 << " moeda(s) de R$ 0.25" << endl;
	cout << ((b%500)%250)/100 << " moeda(s) de R$ 0.10" << endl;
	cout << (((b%500)%250)%100)/50 << " moeda(s) de R$ 0.05" << endl;
	cout << ((((b%500)%250)%100)%50)/10 << " moeda(s) de R$ 0.01" << endl;

}

}

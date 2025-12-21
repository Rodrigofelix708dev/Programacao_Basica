#include <bits/stdc++.h>
using namespace std;
int main (){
	double sal,nsal,rea,por;
	cin >> sal;
	if(sal<=400.00){
		nsal = (sal*15)/100+sal;
		rea = nsal-sal;
		por = 15;
	}
	if(sal>400.00 and sal<=800.00){
		nsal = (sal*12)/100+sal;
		rea = nsal-sal;
		por = 12;
	}
	if(sal>800.00 and sal<=1200.00){
		nsal = (sal*10)/100+sal;
		rea = nsal-sal;
		por = 10;
	}
	if(sal>1200.00 and sal<=2000.00){
		nsal = (sal*7)/100+sal;
		rea = nsal-sal;
		por = 7;
	}
	if(sal>2000.00){
		nsal = (sal*4)/100+sal;
		rea = nsal-sal;
		por = 4;
	}

	cout << fixed << setprecision(2);
	cout << "Novo salario: " << nsal << endl;
	cout << "Reajuste ganho: " << rea << endl;
	cout << fixed << setprecision(0) << "Em percentual: " << por << " %" << endl;
}
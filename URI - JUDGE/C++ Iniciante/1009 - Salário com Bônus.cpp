#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	char nome[15];
double salf, ve, bonus, total;
cin >> nome;
cin >> salf >> ve;
bonus = (ve*15)/100;
total = bonus+salf;
cout << fixed << setprecision(2);
cout << "TOTAL = R$ " << total << endl;
}
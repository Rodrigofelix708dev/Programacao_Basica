#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double vet[13][13]={0};
	int l,cont=0;
	char op;
	double sum=0;
	cin >> op;
	//lendo a matriz
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin >> vet[i][j];
			}
		}
		//selecionando a linha ou coluna
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(i>j){
				sum+=vet[j][i];
				vet[i][j]=0;
				cont++;
				}
			}
		}
		//Imprimindo a matriz
	/*for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cout << vet[i][j] << " ";
			if(j==11){
				cout << endl;
			}
		}
	}*/
	//saida resultado
	cout << fixed << setprecision(1);
	if(op=='S'){
		cout << sum << endl;
	}
	else if(op=='M'){
		cout << sum/cont << endl;
	}
}
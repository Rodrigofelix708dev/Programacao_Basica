#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	long long  m=12,n=12;
	char l;
	double vet[m][n],cont=0,it=0.0;
	cin >> l;
	cout << fixed << setprecision(1);
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin >> vet[i][j];
		}
	}
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			if(i>j){
				cont+=vet[i][j];
				it++;
			}
		}
	}
	if(l=='S'){
		cout << cont << endl;
	}else{
		cout << cont/it << endl;
	}

}
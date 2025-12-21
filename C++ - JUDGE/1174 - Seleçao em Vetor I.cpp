#include <bits/stdc++.h>
using namespace std;
int main (){
	double vet[100];
	for(int i=0;i<100;i++){
		cin >> vet[i];
	}
	cout << fixed << setprecision(1);
	for(int i=0;i<100;i++){
		if(vet[i]<=10){
			cout << "A[" << i << "] = " << vet[i] << endl;
		}
	}
}
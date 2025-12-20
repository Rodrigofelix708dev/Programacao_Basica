#include <bits/stdc++.h>
using namespace std;
int main (){
	int aux,id,maior=0;
	for(int i=1;i<=100;i++){
		cin >> aux;
		if(aux>maior){
			maior = aux;
			id = i;
		}
	}
	cout << maior << endl;
	cout << id << endl;
}
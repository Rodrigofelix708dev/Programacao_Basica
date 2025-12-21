#include <bits/stdc++.h>
using namespace std;
int main (){
	int hi,hf,aux=24;
	cin >> hi >> hf;

	if(hi==hf){
		cout << "O JOGO DUROU " << aux << " HORA(S)" << endl;
	}
	if(hi>hf){
		cout << "O JOGO DUROU " << aux-(hi-hf) << " HORA(S)" << endl;	
	}
	if(hi<hf){
		cout << "O JOGO DUROU " << hf-hi << " HORA(S)" << endl;
	}

}
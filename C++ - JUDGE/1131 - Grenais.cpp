#include <bits/stdc++.h>
using namespace std;
int main (){
	int inter,gremio;
	int intv=0,grev=0,emp=0,gre=0,id=1;
	while(id==1){
		cin >> inter >> gremio;
		gre++;
		
		if(inter>gremio){
			intv++;
		}
		else if(gremio>inter){
			grev++;
		}
		else{
			emp++;
		}
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> id;
	}
	cout << gre << " grenais" << endl;
	cout << "Inter:" << intv << endl;
	cout << "Gremio:" << grev << endl;
	cout << "Empates:" << emp << endl;
	if(grev>intv and grev>emp){
		cout << "Gremio venceu mais" << endl;
	}
	else if(intv>grev and intv>emp){
		cout << "Inter venceu mais" << endl;
	}
	else{
		cout << "Nao houve vencedor" << endl;
	}
}
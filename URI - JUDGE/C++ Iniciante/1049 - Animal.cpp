#include <bits/stdc++.h>
using namespace std;
int main (){
	string tipo, clas, ali;
	cin >> tipo >> clas >> ali;
	if(tipo =="vertebrado"){
		if(clas=="ave"){
			if(ali=="carnivoro"){
				cout << "aguia" << endl;
			}
			else{
				cout << "pomba" << endl;
			}
		}
		else{
			if(ali=="onivoro"){
				cout << "homem" << endl;
			}
			else{
				cout << "vaca" << endl;
			}
		}
	}
	else{
		if(clas=="inseto"){
			if(ali=="hematofago"){
				cout << "pulga" << endl;
			}
			else{
				cout << "lagarta" << endl;
			}
		}
		else{
			if(ali=="hematofago"){
				cout << "sanguessuga" << endl;
			}
			else{
				cout << "minhoca" << endl;
			}
		}
	}
}
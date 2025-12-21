#include <iostream>
using namespace std;
int main (){
	long long n,n1,pd;
	string nome;
	cin >> n;
	for(int i=0;i<n;i++){
	cin >> nome;
	cin >> n1;
	if(nome=="THOR" || nome=="Thor"){
		cout << "Y" << endl;
	}
	else{ cout << "N" << endl;
	}	
	}
} 
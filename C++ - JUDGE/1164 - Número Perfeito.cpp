#include <iostream>
using namespace std;
int main (){
	long long n, cont=0,num;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> num;
		for(int j=1;j<num;j++){
			if(num%j==0){
			cont+=j;
			}
		}
		if(cont==num){
			cout << num << " eh perfeito" << endl;
		}
		else{
			cout << num << " nao eh perfeito" << endl;
		}
		cont=0;
	}
}
#include <iostream>
using namespace std;
int main (){
	long long n, a;
	cin >> a;
	for(int i=0; i<a; i++){
		cin >> n;
		if(n>8000){
		cout << "Mais de 8000!" << endl;
		}else{
		cout << "Inseto!" << endl;
		}
	}
}
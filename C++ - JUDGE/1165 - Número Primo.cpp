#include <iostream>

using namespace std;
int main () {
long long n ,n1,np=0;
cin >> n;
	for(int i=1; i<=n;i++){
		cin >> n1;
		np=0;
		for(int i=1;i<=n1;i++){
			if(n1%i==0){
			np++;
			}
		}
		if(np==2){
		cout << n1 << " eh primo" << endl;	
		}else{
			cout << n1 << " nao eh primo" << endl;
		}	
	}
}
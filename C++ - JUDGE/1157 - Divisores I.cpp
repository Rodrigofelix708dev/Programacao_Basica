#include <iostream>
using namespace std;
int main (){
	long long n, cont=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout << i << endl;
		}
	}
}
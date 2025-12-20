#include <iostream>
using namespace std;
int main (){
	long long n;
	cin >> n;
	for(int i=0;i<9999;i++){
		if(i%n==2){
			cout << i << endl;
		}
	}
}
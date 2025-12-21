#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double n,n1,me=100.00;
	while(cin >>n){
		for(int i=0;i<n;i++){
			cin >> n1;
			if(n1<me){
				me=n1;
			}
		}
		cout << fixed << setprecision(2)<< me << endl;
		me=100.00;
	}
}
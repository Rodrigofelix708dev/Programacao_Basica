#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,n1;
	cin >> n1;
	for(int i=0;i<n1;i++){
		cin >>n;
		if(n==0){
		cout << "NULL" << endl;
		}
		else if(n%2==0){
			cout << "EVEN";
			if(n>0){
				cout << " POSITIVE" << endl;
			}
			else{
				cout << " NEGATIVE" << endl;
			}
		}
		else{
			cout << "ODD";
			if(n>0){
				cout << " POSITIVE" << endl;
			}
			else{
				cout << " NEGATIVE" << endl;
			}
		}
	}
}
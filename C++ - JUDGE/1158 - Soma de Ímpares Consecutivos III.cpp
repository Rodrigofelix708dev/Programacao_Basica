#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,a,b,cont=0;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> a >> b;
		if(a%2==0){
			a=a+1;
		}
			for(int i=a,f=0;f<b;f++,i+=2){
				cont+=i;
		}
		cout << cont << endl;
		cont=0;
	}
}
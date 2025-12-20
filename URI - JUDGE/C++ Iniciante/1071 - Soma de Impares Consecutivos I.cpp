#include <bits/stdc++.h>
using namespace std;
int main (){
	int x,y,aux, cont=0;
	cin >> x >> y;
	if(x>y){
		aux = y;
		y = x;
		x = aux;
	}
	if(x==y){
		cout << 0 << endl;
		return 0;
	}
	if(x%2==0 and y%2==0){
		for(int i=x+1;i<y;i+=2){
			cont+=i;
		}
	}
	if(x%2==0 and y%2!=0){
		for(int i=x+1;i<y-1;i+=2){
			cont+=i;
		}
	}
	if(x%2!=0 and y%2==0){
		for(int i=x+2;i<y;i+=2){
			cont+=i;
		}
	}
	if(x%2!=0 and y%2!=0){
		for(int i=x+2;i<y-1;i+=2){
			cont+=i;
		}
	}
	cout << cont << endl;	
}
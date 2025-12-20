#include <iostream>
using namespace std;
int main (){
	long long a, n,n1,ma=0,me=0,sum=0;
	cin >> a;
	for(int b=0;b<a;b++){
		cin >> n >> n1;
	//quem é o maior
	if(n>n1){
		ma=n;
	}
	else{
		me=n;
	}
	if(n1>n){
		ma=n1;
	}
	else{
		me=n1;
	}
	// contador se n for par
	if(me%2==0 and ma%2==0){
		for(int i=me+1;i<ma;i+=2){
			sum+=i;
		}	
	}
	if(me%2==0 and ma%2!=0){
		for(int i=me+1;i<ma-1;i+=2){
			sum+=i;
		}	
	}
	if(me%2!=0 and ma%2==0){
		for(int i=me+2;i<ma;i+=2){
			sum+=i;
		}	
	}
	if(me%2!=0 and ma%2!=0){
		for(int i=me+2;i<ma-1;i+=2){
			sum+=i;
		}	
	}
	if(me%2!=0){
		if(me+2==ma){
		sum=0;
		}
	}
	if(me+1==ma){
		sum=0;	
		}
	if(n==n1){
		sum=0;
	}
	// saida
	cout << sum << endl;	
	sum=0;
	}	
}
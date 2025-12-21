#include <iostream>
using namespace std;
int main (){
	long long a,sum=0;
	while(cin >> a,a!=0){
		if(a%2==0){
			for(int b=0,c=0;b<5;b++,c+=2){
				sum+=a+c;
			}
		}
		else{
			a=a+1;
			for(int b=0,c=0;b<5;b++,c+=2){
				sum+=a+c;	
			}
		}
		cout << sum << endl;
		sum=0;
	}
}
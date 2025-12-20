#include <iostream>
using namespace std;
int main (){
	int a,b;
	cin >> a;
	
	if(a%2!=0){
		b=a;
	}
	else {
		b= a+1;
	}
	
	for(int i=0;i<6;i++){
			cout << b << endl;
			b+=2;
		}
} 
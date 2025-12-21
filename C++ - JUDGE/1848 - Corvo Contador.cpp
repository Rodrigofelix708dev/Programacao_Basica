#include <iostream>
#include <string>
using namespace std;
int main (){
	string caw;
	int sum=0,n=0;
	while(getline(cin,caw)){
		if(caw=="caw caw"){
			++n;
			cout << sum << endl;
			sum=0;
		}
		if(n==3){
			return 0;
		}
		if(caw=="--*"){
			sum+=1;
		}
		if(caw=="-*-"){
			sum+=2;
		}
		if(caw=="-**"){
			sum+=3;
		}
		if(caw=="*--"){
			sum+=4;
		}
		if(caw=="*-*"){
			sum+=5;
		}
		if(caw=="**-"){
			sum+=6;
		}
		if(caw=="***"){
			sum+=7;
		}
	}
}
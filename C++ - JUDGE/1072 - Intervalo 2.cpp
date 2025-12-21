#include <iostream>
using namespace std;
int main (){
	long long n,num,in=0,out=0;
	cin >>n;
	for(int i=0;i<n;i++){
		cin >> num;
		if(num>=10 and num<=20){
			in++;
	}
	else{
		out++;
	}
	}
	cout << in << " in" << endl;
	cout << out << " out" << endl;
}
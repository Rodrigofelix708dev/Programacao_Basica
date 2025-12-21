#include <iostream>
using namespace std;
int  fat(int n){
	if(n<=1){
	return 1;
	}
	return n*fat(n-1);	
}
	int main (){
	int n;
	cin >> n;
	while(n!=-1){
	cout << fat(n) << endl;
	return n*(n-2);
	}
	return 0;
}
 
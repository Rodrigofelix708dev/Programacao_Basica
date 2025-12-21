#include <iostream>
using namespace std;
int main (){
	long long n,cont=100,con=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		
		if(a[i]<cont){
			cont=a[i];
			con=i;
		}
	}
	cout << con+1 << endl;
}
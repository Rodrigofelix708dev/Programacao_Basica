#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	long long n;
	double x,y,div=0;
	cin >> n;
	cout << fixed << setprecision(1);
	for(int i=0;i<n;i++){
		cin >> x >> y;
		if(y==0){
			cout << "divisao impossivel" << endl;
		}
		else if(x!=0){
			div=x/y;
			cout << div << endl;
		}
		else{
			div=0;
			cout << div << endl;
		}
	}
}

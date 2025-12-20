#include <iostream>

using namespace std;
int main (){
long long N = 0, a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
		if (a%2 == 0){
		N++;
		}if(b%2 == 0){
		N++;
		}if(c%2 == 0){
		N++;
		}if(d%2 == 0){
		N++;
		}if(e%2 == 0){
		N++;
	}
	cout << N << " valores pares" << endl;
}
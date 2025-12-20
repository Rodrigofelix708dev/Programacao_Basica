#include <iostream>
using namespace std;
int main (){
long long N ,Total=1;
	cin >> N;
	for(int i=1; i<=N; i++){
	Total *= i;
	}
	cout << Total << endl;
}
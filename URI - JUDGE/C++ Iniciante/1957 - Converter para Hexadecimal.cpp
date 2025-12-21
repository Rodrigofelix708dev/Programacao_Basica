#include <iostream>
using namespace std;
int main (){
	int aux, i=1,j, rest,N;
	char mat[1001];
	cin >> N;
	aux = N;
	while(aux != 0){
		rest = aux % 16;
		if (rest < 10)
		mat[i++] = rest + 48;
		else
		mat[i++] = rest + 55;
		aux = aux / 16;
		}

	for (j = i-1; j > 0; j--){
	cout << mat[j];
	}
	cout << endl;
}
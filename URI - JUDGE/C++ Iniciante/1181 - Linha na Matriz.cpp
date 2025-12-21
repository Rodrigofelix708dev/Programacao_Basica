#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double vet[12][12]={0};
	int l;
	char op;
	double sum=0;
	cin >> l;
	cin >> op;
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin >> vet[i][j];
			}
		}
		for(int i=l;i<l+1;i++){
			for(int j=0;j<12;j++){
				//vet[i][j]=0;
				sum+=vet[i][j];
			}
		}
	/*for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cout << vet[i][j] << " ";
			if(j==11){
				cout << endl;
			}
		}
	}*/
	cout << fixed << setprecision(1);
	if(op=='S'){
		cout << sum << endl;
	}
	else if(op=='M'){
		cout << sum/12 << endl;
	}
}
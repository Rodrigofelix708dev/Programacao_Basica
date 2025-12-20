#include <iostream>
using namespace std;
int main (){
int m, n, a, Soma=0;
while(cin >> m >> n, m!=0 && n!=0){
		if(m<0 || n<0){
			break;
		}
		else if(m>n){
			for(int i=0;n<=m;n++){
			Soma += n;
			cout << n << " ";
			}cout << "Sum=" << Soma << endl;
			Soma=0;
		}else if (n>m){
			for(int i=0;m<=n;m++){
			Soma += m;
			cout << m << " ";
			}cout << "Sum=" << Soma << endl;
		}Soma=0;
	}
}

#include <iostream>
using namespace std;
int main (){
	long long l,c,sum=0;
	cin >> l;
	c=l+1;
	long long cp[l+2][c+2], cpi[l+2][c+2];
	
	for(int ii=0;ii<c;ii++){
		for(int jj=0;jj<c;jj++){
			cin >> cp[ii][jj];	
		}	
	}
	for(int i=0;i<c-1;i++){
		for(int j=0;j<c-1;j++){
			if(cp[i][j]==1){
				sum ++;
			}if(cp[i+1][j]==1){
				sum ++;
			}if(cp[i][j+1]==1){
				sum ++;
			}if(cp[i+1][j+1]==1){
				sum ++;
			}
			if(sum>=2){
				cout << "S";
			}
			else{
				cout << "U";
			}
			sum=0;	
		}
		cout << endl;
	}
}
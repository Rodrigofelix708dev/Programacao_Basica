#include <iostream>
using namespace std;
int main (){
	long long l=0,c=0;
	while(cin >> l >> c){
		long long tp[l+2][c+2], cp[l+2][c+2];
		
		for(int i=1 ;i<=l;i++){
			for(int j=1;j<=c;j++){
				cin >> tp[i][j];
			}
		}
		for(int a=0 ;a<l+2;a++){
			for(int b=0;b<c+2;b++){
				cp[a][b]=0;
			}
		}
		for(int i=1;i<=l;i++){
			for(int j=1;j<=c;j++){
				if(tp[i][j] == 1){
					cp[i][j] = 9;
				}
				else {
					if(tp[i+1][j] == 1){
						cp[i][j]++;
					}
					if(tp[i-1][j] == 1){
						cp[i][j]++;
					}
					if(tp[i][j+1] == 1){
						cp[i][j]++;
					}
					if(tp[i][j-1] == 1){
						cp[i][j]++;
					}
				}
			cout << cp[i][j];
			}
			cout << endl;
		}
		for(int a=0 ;a<l+2;a++){
			for(int b=0;b<c+2;b++){
				tp[a][b]=0;
			}
		}
	}
}
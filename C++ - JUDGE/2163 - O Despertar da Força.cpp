#include <iostream>
using namespace std;
int main (){
	long long l,c, aq=0,ii,jj, x=0, y=0;
	cin >> l >> c;
	long long Dep[l][c];
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
		cin >> Dep[i][j];
			}		
		}
		for(int ii=1;ii<l-1;ii++){
			for(int jj=1;jj<c-1;jj++){
				 if(Dep[ii][jj]==42 && Dep[ii+1][jj]==7 && Dep[ii-1][jj]==7 && Dep[ii][jj+1]==7 && Dep[ii][jj-1]==7 && Dep[ii+1][jj+1]==7 && Dep[ii-1][jj-1]==7 && Dep[ii+1][jj-1]==7 && Dep[ii-1][jj+1]==7){
				aq= Dep[ii][jj];
				//cout << ii+1 << " " <<  jj+1 << endl;
				x=ii+1;
				y=jj+1;	
				 }
			}
		}
	//		if(aq != 42){	 	cout << "0 " << "0" << endl;
//}
cout << x <<" "  <<  y << endl;
}
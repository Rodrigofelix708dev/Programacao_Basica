#include <bits/stdc++.h>
using namespace std;
int main (){
	double p1,p2,p3,res;
	int n;
	cin >> n;
	cout << fixed << setprecision(1);
	for(int i=0;i<n;i++){
		cin >> p1 >> p2 >>p3;
		res = (p1*2)+(p2*3)+(p3*5);	
		cout << res/10 << endl;
	}
}
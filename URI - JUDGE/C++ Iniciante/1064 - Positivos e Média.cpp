#include <iostream>
#include <iomanip>
using namespace std;
int main (){
double n1, n2, n3, n4, n5, n6,vp=0, soma=0;
cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
	if(n1>0){
	vp++;
	soma+=n1;
	}else {

	}	if(n2>0){
	vp++;
	soma+=n2;
	}else {

	}	if(n3>0){
	vp++;
	soma+=n3;
	}else {

	}	if(n4>0){
	vp++;
	soma+=n4;
	}else {

	}	if(n5>0){
	vp++;
	soma+=n5;
	}else {

	}	if(n6>0){
	vp++;
	soma+=n6;
	}else {

}	
	cout << vp << " valores positivos" << endl;
	cout << fixed << setprecision(1);
	cout << soma/vp << endl;
}
#include <iostream>
using namespace std;
int main (){
long long n1, n2, n3, n4, n5, n6,vp=0,vn=0, soma=0, par=0, impar=0;
cin >> n1 >> n2 >> n3 >> n4 >> n5;
	if(n1%2==0){
		par++;
		if(n1>0){
		vp++;
		}else if(n1<0) {
		vn++;
		}
		}else{
		impar++;
		if(n1>0){
		vp++;
		}else{
		vn++;
		}
	}if(n2%2==0){
		par++;
		if(n2>0){
		vp++;
		}else if(n2<0) {
		vn++;
		}
		}else{
		impar++;
		if(n2>0){
		vp++;
		}else{
		vn++;
		}
	}if(n3%2==0){
		par++;
		if(n3>0){
		vp++;
		}else if(n3<0) {
		vn++;
		}
		}else{
		impar++;
		if(n3>0){
		vp++;
		}else{
		vn++;
		}
	}if(n4%2==0){
		par++;
		if(n4>0){
		vp++;
		}else if(n4<0) {
		vn++;
		}
		}else{
		impar++;
		if(n4>0){
		vp++;
		}else{
		vn++;
		}
	}if(n5%2==0){
		par++;
		if(n5>0){
		vp++;
		}else if(n5<0) {
		vn++;
		}
		}else{
		impar++;
		if(n5>0){
		vp++;
		}else{
		vn++;
		}
	}
	cout << par << " valor(es) par(es)" << endl;
	cout << impar << " valor(es) impar(es)" << endl;
	cout << vp << " valor(es) positivo(s)" << endl;
	cout << vn << " valor(es) negativo(s)" << endl;
}
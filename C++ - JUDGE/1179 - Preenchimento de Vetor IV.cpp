#include <bits/stdc++.h>
using namespace std;
int main (){
	int veti[5],vetp[5], qi=0,qp=0,n;
  for(int i=0;i<15;i++){
    cin >> n;
    if(n%2==0){
      vetp[qp]=n;
      qp++;
      if(qp==5){
        for(int a=0;a<5;a++){
          cout << "par[" << a << "] = " << vetp[a] << endl;
        }
        qp=0;
      }
    }
    else{
      veti[qi]=n;
      qi++;
      if(qi==5){
        for(int a=0;a<5;a++){
          cout << "impar[" << a << "] = " << veti[a] << endl;
        }
        qi=0;
      }
    }
  }
  for(int i=0;i<qi;i++){
    cout << "impar[" << i << "] = " << veti[i] << endl;
  }
  for(int i=0;i<qp;i++){
    cout << "par[" << i << "] = " << vetp[i] << endl;
  }
}
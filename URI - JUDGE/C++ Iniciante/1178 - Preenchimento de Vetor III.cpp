#include <bits/stdc++.h>
using namespace std;
int main (){
	double vet[100];
  double n;
  cin >> n;
  vet[0]=n;
  for(int i=1;i<100;i++){
    vet[i]=vet[i-1]/2.0;
  }
  for(int i=0;i<100;i++){
    cout <<fixed << setprecision(4)<<  "N[" << i << "] = " << vet[i] << endl;
  }
}
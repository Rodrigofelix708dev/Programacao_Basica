#include <bits/stdc++.h>
using namespace std;
int main (){
	int vet[20];
  int veti[20];
  for(int i=0,j=19;i<20;i++,j--){
    cin >> vet[i];
    veti[j]=vet[i];
  }
  for(int i=0;i<20;i++){
    cout << "N[" << i << "] = " << veti[i] << endl;
  }
}
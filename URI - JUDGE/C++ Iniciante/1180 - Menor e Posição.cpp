#include <bits/stdc++.h>
using namespace std;
int main (){
  int n,mv=9999,po=0;
  cin >> n;
  int vet[n];
  for(int i=0;i<n;i++){
    cin >> vet[i];
    if(vet[i]<mv){
      mv=vet[i];
      po=i;
    }
  }
  cout << "Menor valor: " << mv << endl;
  cout << "Posicao: " << po << endl;
}
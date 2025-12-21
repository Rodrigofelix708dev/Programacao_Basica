#include <bits/stdc++.h>
using namespace std;
int main (){
  int n,rp,po=0,c=1,av;
  cin >> n;
  int vet[n];
  cin >> rp;
  vet[0]=rp;
  for(int i=1;i<n;i++){
    cin >> vet[i];
    if(vet[i]<vet[i-1]){
      po=i+1;
      if(c==1){
        c=0;
        av=po;
      }
    }
  }
  if(c==0){
   cout << av << endl;
  }
  else{
     cout << 0 << endl;
  }
}
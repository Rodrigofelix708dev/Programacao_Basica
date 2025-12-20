#include <bits/stdc++.h>
using namespace std;
int main (){
  int n=0,aux;
  for(int i=0;i<3;i++){
    cin >> aux;
    if(aux>n){
      n=aux;
    }
  }
  cout << n << " eh o maior" << endl;
}
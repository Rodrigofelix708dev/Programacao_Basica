#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,cont=0;
  cin >> n;
  for(int i=0;i<1000;i++){
    cout << "N[" << i << "] = " << cont << endl;
    cont++;
    if(cont==n){
      cont=0;
    }
  }
}
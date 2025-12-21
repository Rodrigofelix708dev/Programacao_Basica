#include <bits/stdc++.h>
using namespace std;
int main (){
	long long vet[60],n,n1;
  vet[0]=0;
  vet[1]=1;
  for(int i=2;i<=60;i++){
    vet[i]=vet[i-1]+vet[i-2];
  }
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> n1;
    cout <<"Fib(" << n1 << ") = " << vet[n1] << endl;
  }
}
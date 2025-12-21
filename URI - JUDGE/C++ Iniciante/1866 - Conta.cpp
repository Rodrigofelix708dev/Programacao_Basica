#include <bits/stdc++.h>
using namespace std;
int main (){
  int n,v;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> v;
    if(v%2==0){
      cout << 0 << endl;
    }
    else{
      cout << 1 << endl;
    }
  }
}
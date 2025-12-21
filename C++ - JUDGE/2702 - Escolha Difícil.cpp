#include <iostream>
using namespace std;
int main (){
	long long frd,bid,mad,cont=0;
	long long frp,bip,map;
	cin >> frd >> bid >> mad;
	cin >> frp >> bip >> map;
	if(frd<frp){
		cont+=frp-frd;
	}
	if(bid<bip){
		cont+=bip-bid;
	}
	if(mad<map){
		cont+=map-mad;
	}
	cout << cont << endl;
}
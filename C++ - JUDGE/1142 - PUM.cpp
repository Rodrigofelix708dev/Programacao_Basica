#include <iostream> 
using namespace std;
int main (){
	long long n;
	cin >> n;
	for(int i=1,c=1;i<=n;i++,c+=4){
		cout << c << " " <<  c+1 << " " << c+2 << " PUM" << endl;
	}
}
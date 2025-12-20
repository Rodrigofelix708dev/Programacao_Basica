#include <iostream>
using namespace std;
int main (){
	int j=1;
	for(int i=60;i>-5;i-=5){
		
		cout << "I=" << j << " ";
		j+=3;	
		cout << "J=" << i << endl;
	}

}
#include <iostream>
using namespace std;
int main (){
	long long hi,mi,hf,mf,res=24,min=60;
	cin >> hi >> mi >> hf >> mf;
	if(hi==hf){
		res=res-1;
		if(mi==mf){
			min=0;
			res=24;
			cout << "O JOGO DUROU " << res << " HORA(S) E ";
			cout << min << " MINUTO(S)" << endl;
		}
		if(mi>mf){
			min=(min-mi)+mf;
			cout << "O JOGO DUROU " << res << " HORA(S) E ";
			cout << min << " MINUTO(S)" << endl;
		}
		if(mi<mf){
			min=mf-mi;
			res=hf-hi;
			cout << "O JOGO DUROU " << res << " HORA(S) E ";
			cout << min << " MINUTO(S)" << endl;
		}
	}
	if(hi>hf){
		res=(res-hi)+hf;
		if(mi==mf){
			min=0;
			cout << "O JOGO DUROU " << res << " HORA(S) E ";
			cout << min << " MINUTO(S)" << endl;
		}
		if(mi>mf){
			min=(min-mi)+mf;
			res=res-1;
			cout << "O JOGO DUROU " << res << " HORA(S) E ";
			cout << min << " MINUTO(S)" << endl;
		}
		if(mi<mf){
			min=mf-mi;
			cout << "O JOGO DUROU " << res << " HORA(S) E ";
			cout << min << " MINUTO(S)" << endl;
		}
	}
	if(hi<hf){
		res=(hf-hi);
		if(mi==mf){
			min=0;
			cout << "O JOGO DUROU " << res << " HORA(S) E ";
			cout << min<< " MINUTO(S)" << endl;
		}
		if(mi>mf){
			min=(min-mi)+mf;
			res=res-1;
			cout << "O JOGO DUROU " << res << " HORA(S) E ";
			cout << min << " MINUTO(S)" << endl;
		}
		if(mi<mf){
			min=mf-mi;
			cout << "O JOGO DUROU " << res << " HORA(S) E ";
			cout << min<< " MINUTO(S)" << endl;
		}
	}
}
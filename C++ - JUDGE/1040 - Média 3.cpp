#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	double n1, n2, n3, n4, e, a =2.0, b =3.0, c =4.0, d =1.0, me, mi, af, mef;
	cin >> n1 >> n2 >> n3 >> n4;
	me = (n1*a)+(n2*b)+(n3*c)+(n4*d);
	mi = (a+b+c+d);
	af = me/mi;
	cout << fixed << setprecision(1);
	cout << "Media: " << af << endl;
	if (af >= 7.0){
		cout << "Aluno aprovado." << endl;
	}else if(af < 5.0){
		cout << "Aluno reprovado." << endl;

	}else{
		cout << "Aluno em exame." << endl;
		cin >> e;
		cout << "Nota do exame: " << e << endl;
		mef = (af+e)/2;
		if(mef >= 5.0 ){
			cout << "Aluno aprovado." << endl;
			cout << "Media final: " << mef << endl;

		}else {
			cout << "Aluno reprovado." << endl;
			cout << "Media final: " << mef << endl;

		}
	}
	return 0;
}

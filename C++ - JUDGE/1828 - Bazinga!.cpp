#include <iostream>
using namespace std;
int main (){
	string s, r;
	string a1="tesoura",a2="papel",a3="pedra",a4="lagarto";
	string a5="Spock";
	long long a ,i;
	cin >> a;
	for(int i=1;i<=a;i++){	 
	cin >> s >> r;
	if(r==s){
		cout << "Caso #" << i << ": " <<"De novo!" << endl;
	}
	if(s ==a1 && r ==a2){
	cout << "Caso #" << i << ": " <<"Bazinga!" << endl;
	}
	else if(s ==a2 && r ==a1){
		cout << "Caso #" << i << ": " <<"Raj trapaceou!" << endl;
	}

	if(s ==a2 && r ==a3){
	cout << "Caso #" << i << ": " <<"Bazinga!" << endl;
	}else if(r ==a2 && s ==a3){
		cout << "Caso #" << i << ": " <<"Raj trapaceou!" << endl;
	}

	if(s ==a3 && r ==a4){
	cout << "Caso #" << i << ": " <<"Bazinga!" << endl;
	}else if(s ==a4 && r ==a3){
		cout << "Caso #" << i << ": " <<"Raj trapaceou!" << endl;
	}

	if(s ==a4 && r ==a5){
	cout << "Caso #" << i << ": " <<"Bazinga!" << endl;
	}else if(s ==a5 && r ==a4){
		cout << "Caso #" << i << ": " <<"Raj trapaceou!" << endl;
	}

	if(s ==a5 && r ==a1){
	cout << "Caso #" << i << ": " <<"Bazinga!" << endl;
	}else if(s ==a1 && r ==a5){
		cout << "Caso #" << i << ": " <<"Raj trapaceou!" << endl;
	}

	if(s ==a1 && r ==a4){
	cout << "Caso #" << i << ": " <<"Bazinga!" << endl;
	}else if(s ==a4 && r ==a1){
		cout << "Caso #" << i << ": " <<"Raj trapaceou!" << endl;
	}

	if(s ==a4 && r ==a2){
	cout << "Caso #" << i << ": " <<"Bazinga!" << endl;
	}else if(s ==a2 && r ==a4){
		cout << "Caso #" << i << ": " <<"Raj trapaceou!" << endl;
	}

	if(s ==a2 && r ==a5){
	cout << "Caso #" << i << ": " <<"Bazinga!" << endl;
	}else if(s ==a5 && r ==a2){
		cout << "Caso #" << i << ": " <<"Raj trapaceou!" << endl;
	}

	if(s ==a5 && r ==a3){
	cout << "Caso #" << i << ": " <<"Bazinga!" << endl;
	}else if(s ==a3 && r ==a5){
		cout << "Caso #" << i << ": " <<"Raj trapaceou!" << endl;
	}

	if(s ==a3 && r ==a1){
	cout << "Caso #" << i << ": " <<"Bazinga!" << endl;
	}else if(s ==a1 && r ==a3){
		cout << "Caso #" << i << ": " <<"Raj trapaceou!" << endl;
		}
	}
}
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
double n, num, vh, a;
cin >> n >> num >> vh;
a = num*vh;
cout << "NUMBER = " << n << endl;
cout << fixed << setprecision(2);
cout << "SALARY = U$ " << a << endl;
}
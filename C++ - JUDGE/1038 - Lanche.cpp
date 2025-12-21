#include <iostream>
#include <iomanip>
using namespace std;

int main (){
int n, n1;
double valor; 
cin >> n >> n1;

if (n==1) {

cout << fixed << setprecision(2) << "Total: R$ " << (4.00*n1) << endl;
}else if (n==2) {

cout << fixed << setprecision(2) << "Total: R$ " << (4.50*n1) << endl;
}else if (n==3) {

cout << fixed << setprecision(2) << "Total: R$ " << (5.00*n1) << endl;
}else if (n==4) {

cout << fixed << setprecision(2) << "Total: R$ " << (2.00*n1) << endl;
}else if (n==5) {

cout << fixed << setprecision(2) << "Total: R$ " << (1.50*n1) << endl;
}
return 0;
}
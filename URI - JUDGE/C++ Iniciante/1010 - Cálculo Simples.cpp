#include <iostream>
#include <iomanip>
using namespace std;
int main() {
double cod, n, v, cod1, n1, v1, p, p1;
cin >> cod >> n >> v >> cod1 >>n1 >>v1;
p = n*v;
p1 = n1*v1;
cout << fixed << setprecision(2);
cout << "VALOR A PAGAR: R$ " << p+p1 << endl;

}
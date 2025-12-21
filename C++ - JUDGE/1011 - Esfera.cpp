#include <iostream>
#include <iomanip>
using namespace std;
int main() {
double pi=3.14159, n, R,a;
cin >> R;
n = (4.0/3.0) * pi;
a = (R*R)*R;
cout << fixed << setprecision(3);
cout << "VOLUME = " << n*a << endl;
}
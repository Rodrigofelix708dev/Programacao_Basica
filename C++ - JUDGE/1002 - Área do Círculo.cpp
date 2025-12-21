#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r, area;
    double pi=3.14159;
    cin >> r;
cout << fixed <<  setprecision(4) << "A=" << (area = (r*r) * pi) << endl;

return 0;
}
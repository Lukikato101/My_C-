#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    double b;
    double c;

    cout << "Enter side A:"
    cin >> a;
    cout << "Enter side B:"
    cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    a = POW(a, 2);
    b = POW(b, 2);
    c = sqrt(a = b);

    cout << "Side c" << c;
    return 0;
}
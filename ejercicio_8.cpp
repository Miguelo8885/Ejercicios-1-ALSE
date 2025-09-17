#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float p;
    float r;
    int n;
    float t;

    cout << "Ingrese su cantidad inicial invertida: ";
    cin >> p;
    cout << "Ingrese la tasa de interés anual (en decimal): ";
    cin >> r;
    cout << "Ingrese el número de veces que se aplica el interes al año: ";
    cin >> n;
    cout << "Ingrese el número de años: ";
    cin >> t;
    float A = A = p * pow(1 + r / n, n * t);
    cout <<"El monto final es de: " << A << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a;
    int b;

    cout << "Ingrese el primer número entero: ";
    cin >> a;
    cout << "Ingrese el segundo número entero: ";
    cin >> b;

    int original_a = a; 
    int original_b = b; 

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    cout <<"El MCD de " << original_a << " y " << original_b << " es: " << a << endl;
    return 0;
}
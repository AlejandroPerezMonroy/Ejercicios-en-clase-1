// Con un numero ingresado por el usuario mostrar por pantalla si el numero es par
#include <iostream>
using namespace std;

int main() {
  // Pedir al usuario un numero
  int n;
  cout << "Ingrese un numero: ";
  cin >> n;
  // Verificar si el numero es par
  if (n % 2 == 0) {
    // El numero es divisible por 2
    cout << "El numero " << n << " es par" << endl;
  } else {
    // El numero no es divisible por 2
    cout << "El numero " << n << " es impar" << endl;
  }
  return 0;
}

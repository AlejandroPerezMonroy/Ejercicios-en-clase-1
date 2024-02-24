// Con un numero ingresado por el usuario mostrar por pantalla si el numero es PRIMO o N
#include <iostream>
using namespace std;

int main() {
  // Pedir al usuario un numero
  int n;
  cout << "Ingrese un numero: ";
  cin >> n;
  // Verificar si el numero es primo
  bool es_primo = true;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      // El numero tiene un divisor diferente de 1 y de si mismo
      es_primo = false;
      break;
    }
  }
  // Mostrar el resultado
  if (es_primo) {
    cout << "El numero " << n << " es PRIMO" << endl;
  } else {
    cout << "El numero " << n << " es N" << endl;
  }
  return 0;
}

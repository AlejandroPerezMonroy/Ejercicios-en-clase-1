// Con un numero ingresado por el usuario calcular el factorial y mostrarlo por pantalla
#include <iostream>
using namespace std;

int main() {
  // Pedir al usuario un numero
  int n;
  cout << "Ingrese un numero: ";
  cin >> n;
  // Calcular el factorial
  long long factorial = 1;
  for (int i = 1; i <= n; i++) {
    factorial = factorial * i;
  }
  // Mostrar el resultado
  cout << "El factorial de " << n << " es " << factorial << endl;
  return 0;
}

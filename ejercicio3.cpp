// Crear la serie de Fibonacci
#include <iostream>
using namespace std;

int main() {
  // Definir el numero de terminos a mostrar
  int n = 10;
  // Inicializar los dos primeros terminos
  int a = 0;
  int b = 1;
  // Mostrar los terminos
  cout << "La serie de Fibonacci de " << n << " terminos es:" << endl;
  for (int i = 1; i <= n; i++) {
    cout << a << " ";
    // Calcular el siguiente termino
    int c = a + b;
    // Actualizar los valores de a y b
    a = b;
    b = c;
  }
  cout << endl;
  return 0;
}

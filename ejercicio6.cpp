// Con un numero ingresado por el usuario mostrar la tabla de multiplicar
#include <iostream>
using namespace std;

int main() {
  // Pedir al usuario un numero
  int n;
  cout << "Ingrese un numero: ";
  cin >> n;
  // Mostrar la tabla de multiplicar
  cout << "La tabla de multiplicar de " << n << " es:" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << n << " x " << i << " = " << n * i << endl;
  }
  return 0;
}

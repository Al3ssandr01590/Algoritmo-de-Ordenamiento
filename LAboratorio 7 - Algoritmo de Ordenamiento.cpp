#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Lista de nombres de estudiantes
  vector<string> nombres = {"Alessandro", "Sebastian", "Zoe", "Jose", "Carlos","Brandon"};

  // Ordenar la lista usando el algoritmo de burbuja
  for (int i = 0; i < nombres.size() - 1; i++) {
    for (int j = 0; j < nombres.size() - i - 1; j++) {
      if (nombres[j] > nombres[j + 1]) {
        string temp = nombres[j];
        nombres[j] = nombres[j + 1];
        nombres[j + 1] = temp;
      }
    }
  }

  // Mostrar los nombres ordenados
  cout << "Nombres ordenados: " << endl;
  for (string nombre : nombres) {
    cout << nombre << endl;
  }

  return 0;
}

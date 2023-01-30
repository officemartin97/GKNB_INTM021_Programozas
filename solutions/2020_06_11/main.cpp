#include <iostream>

double avg(double lista[], int hossz) {
  double min = 0, max = 0, temp;
  int mindex = 0, maxdex = 0;
  double avg;

  for (int i = 0; i < hossz; i++) {
    if (lista[i] < min) {
      min = lista[i];
      mindex = i;
    }
    if (lista[i] > max) {
      max = lista[i];
      maxdex = i;
    }
  }

  temp = lista[mindex];
  lista[mindex] = lista[0];
  lista[0] = temp;

  temp = lista[maxdex];
  lista[maxdex] = lista[1];
  lista[1] = temp;

  for (int i = 2; i < hossz; i++) {
    avg += lista[i];
  }

  avg = avg / hossz;
  return avg;
}

int main() {
  double lista[] = {0, 2, 3, 5, 8, 9, 4, 6, 7};
  int hossz = 9;

  std::cout << avg(lista, hossz);

  return 0;
}
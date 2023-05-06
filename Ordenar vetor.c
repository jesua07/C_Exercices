#include <stdio.h>
int main() {
  int vet[8];
  int i, j, temp;

  for (i = 0; i < 8; i++) {
    printf("\nNúmero: ");
    scanf("%d", &vet[i]);
  }
  printf("\nVetor não ordenado: ");
  for (i = 0; i < 8; i++) {
    printf("\n[%d]%d ", i, vet[i]);
  }
  printf("\n\nVetor ordenado: ");
  for (i = 0; i < 8; i++) {
    for (j = i + 1; j < 8; j++) {
      if (vet[i] > vet[j]) {
        temp = vet[i];
        vet[i] = vet[j];
        vet[j] = temp;
      }
    }
    printf("\n[%d]%d ", i, vet[i]);
  }
}
#include <stdio.h>
int main() {
  int tam;
  printf("\n Informe tamanho do vetor (par)");
  scanf("%d", &tam);
  int vet[tam];
  int metade = tam / 2;
  for (int i = metade; i < tam; i++) {
    printf("posicao do vetor %d:", i);
    scanf("%d", &vet[i]);
  }
  for (int i = 0; i < metade; i++) {
    printf("posicao do vetor %d:", i);
    scanf("%d", &vet[i]);
  }
  printf("\n vetor inteiro");
  for (int i = 0; i < tam; i++) {
    printf("[%d]%d| ", i, vet[i]);
  }
  printf("\n\no que deseja pesquisar no vetor");
  int pesquisa, encontrou = 0, posicao[tam], ip=0;
  scanf("%d", &pesquisa);
  for (int i = 0; i < tam; i++) {
    if (pesquisa == vet[i]) {
      encontrou = 1;
      posicao[ip] = i;
      ip++;
    }
    }
    if (encontrou == 1) {
      printf("\nEncontrado nas posições: ");
      for (int i=0; i<ip; i++){
        printf("%d, ", posicao[i]);
      }
    } else
      printf("\nnão existe");
}
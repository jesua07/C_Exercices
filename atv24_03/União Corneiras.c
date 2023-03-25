#include <stdio.h>

// Carlos Henrique Nobrega da Silva e Jesua Isaque Calefi da Silva
int main(void) {
  int escolha, i;
  float tempoM, tempoS, somaM1, somaM2, somaM3;
  while (escolha != 5) {
    printf("Uniao Corneiras\n");
    printf("1. Volta 1\n");
    printf("2. Volta 2\n");
    printf("3. Volta 3\n");
    printf("4. Classificacao\n");
    printf("5. Sair\n");

    scanf("%d", &escolha);

    switch (escolha) {
    case 1:
      for (i = 1; i <= 3; i++) {
        printf("Digite os minutos da moto %d:\n", i);
        scanf("%f", &tempoM);
        printf("Digite os segundos da moto %d:\n", i);
        scanf("%f", &tempoS);
        tempoM = tempoM * 60;
        if (i == 1) {
          somaM1 = tempoM + tempoS;
        } else {
        }
        if (i == 2) {
          somaM2 = tempoM + tempoS;
        } else {
        }
        if (i == 3) {
          somaM3 = tempoM + tempoS;
        }
      }
      break;

    case 2:
      for (i = 1; i <= 3; i++) {
        printf("Digite os minutos da moto %d:\n", i);
        scanf("%f", &tempoM);
        printf("Digite os segundos da moto %d:\n", i);
        scanf("%f", &tempoS);
        tempoM = tempoM * 60;
        if (i == 1) {
          somaM1 = somaM1 + tempoM + tempoS;
        } else {
        }
        if (i == 2) {
          somaM2 = somaM2 + tempoM + tempoS;
        } else {
        }
        if (i == 3) {
          somaM3 = somaM3 + tempoM + tempoS;
        }
      }
      break;

    case 3:
      for (i = 1; i <= 3; i++) {
        printf("Digite os minutos da moto %d:\n", i);
        scanf("%f", &tempoM);
        printf("Digite os segundos da moto %d:\n", i);
        scanf("%f", &tempoS);
        tempoM = tempoM * 60;
        if (i == 1) {
          somaM1 = somaM1 + tempoM + tempoS;
        } else {
        }
        if (i == 2) {
          somaM2 = somaM2 + tempoM + tempoS;
        } else {
        }
        if (i == 3) {
          somaM3 = somaM3 + tempoM + tempoS;
        }
      }
      break;
    case 4:
      somaM1 = somaM1 / 3.0;
      somaM2 = somaM2 / 3.0;
      somaM3 = somaM3 / 3.0;
      if ((somaM1 < somaM2) && (somaM2 < somaM3)) {
        printf("Primeiro colocado e a moto 1 com %.2f segundos\n\n", somaM1);
        printf("Segundo colocado e a moto 2 com %.2f segundos\n\n", somaM2);
        printf("Terceiro colocado e a moto 3 com %.2f segundos\n\n", somaM3);
      } else {
      }
      if ((somaM1 < somaM3) && (somaM3 < somaM2)) {
        printf("Primeiro colocado e a moto 1 com %.2f segundos\n\n", somaM1);
        printf("Segundo colocado e a moto 3 com %.2f segundos\n\n", somaM3);
        printf("Terceiro colocado e a moto 2 com %.2f segundos\n\n", somaM2);
      } else {
      }
      if ((somaM2 < somaM1) && (somaM1 < somaM3)) {
        printf("Primeiro colocado e a moto 2 com %.2f segundos\n\n", somaM2);
        printf("Segundo colocado e a moto 1 com %.2f segundos\n\n", somaM1);
        printf("Terceiro colocado e a moto 3 com %.2f segundos\n\n", somaM3);
      } else {
      }
      if ((somaM2 < somaM3) && (somaM3 < somaM1)) {
        printf("Primeiro colocado e a moto 2 com %.2f segundos\n\n", somaM2);
        printf("Segundo colocado e a moto 3 com %.2f segundos\n\n", somaM3);
        printf("Terceiro colocado e a moto 1 com %.2f segundos\n\n", somaM1);
      } else {
      }
      if ((somaM3 < somaM1) && (somaM1 < somaM2)) {
        printf("Primeiro colocado e a moto 3 com %.2f segundos\n\n", somaM3);
        printf("Segundo colocado e a moto 1 com %.2f segundos\n\n", somaM1);
        printf("Terceiro colocado e a moto 2 com %.2f segundos\n\n", somaM2);
      } else {
      }
      if ((somaM3 < somaM2) && (somaM2 < somaM1)) {
        printf("Primeiro colocado e a moto 3 com %.2f segundos\n\n", somaM3);
        printf("Segundo colocado e a moto 2 com %.2f segundos\n\n", somaM2);
        printf("Terceiro colocado e a moto 1 com %.2f segundos\n\n", somaM1);
      }
      break;

    case 5:
      printf("Voce saiu\n\n");
      break;

    default:
      printf("Opcao Invalida\n\n");
    }
  }
  return 0;
}

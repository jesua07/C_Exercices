#include <stdio.h>
int main(void){
    int operacao;
    printf("\n===Menu===");
    printf("\n1-Opcao1, 2-Opcao2, 3-Sair:\n");
    scanf("%d", &operacao);

    switch(operacao){
        case 1: printf("\nEntrei na opcao 1");
        break;
        case 2: printf("\nEntrei na opcao 2");
        break;
        case 3: printf("Fim");
        break;
        default: printf("Escolha invalida!");

    }


}

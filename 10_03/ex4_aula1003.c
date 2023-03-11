#include <stdio.h>
int main(void){
    float saldo, limite, deposito, pix;
    limite = 500;
    saldo = 1000;
    int operacao;
    printf("\n=====Menu=====");
    printf("\n1-Consultar Saldo, 2-Consultar Limite, 3-Depositar, 4-Pix, 5-Sair");
    scanf("%d", &operacao);

    while(operacao != 5){
        switch(operacao){
        case 1: printf("\nSeu saldo e de %.2f",saldo);
        return main();
        break;
        case 2: printf("\nSeu limite e de %.2f", limite);
        return main();
        break;
        case 3: printf("\nInforme o valor do deposito (valor em R$):");
        scanf ("%f", &deposito);
        saldo = saldo + deposito;
        printf ("\nSeu saldo atual e %.2f", saldo);
        break;
        case 4:
        printf("\nInforme o valor do pix (Valor em R$):");
        scanf("%f",&pix);
        if (pix > (saldo + limite)){
            printf("Sem limite disponivel!");
        }else{
            saldo = saldo - pix;
        }
        printf ("\nSeu saldo atual e %.2f", saldo);
        if(saldo < 0){
            printf("\n\t\t\t Voce esta usando seu limite!");
        }
        break;
        case 5: printf("Fim");
        break;
        default: printf("Escolha invalida!");
        return main();
        break;
    }
    }
}

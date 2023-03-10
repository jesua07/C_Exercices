int main(void) {
    int operacao;
    float saldo, deposito, pix, limite;
    char cliente[10];
    saldo = 100;
    limite = 300;
    printf ("Qual o seu nome? ");
    scanf ("%s",&cliente);
    printf ("\nSr. Cliente %s seu saldo atual e %.2f", cliente, saldo);
    printf("\nQual a operacao desejada? (1-Deposito 2-Pix):");
    scanf ("%d", &operacao);
    if(operacao == 1){
        printf("\nInforme o valor do deposito (valor em R$):");
        scanf ("%f", &deposito);
        saldo = saldo + deposito;
        printf ("\n Sr. Cliente %s seu saldo atual e %.2f", cliente, saldo);
    }
    if (operacao == 2){
        printf("\nInforme o valor do pix (Valor em R$):");
        scanf("%f",&pix);
        if (pix > (saldo + limite)){
            printf("Sem limite disponivel!");
        }else{
            saldo = saldo - pix;
        }
        printf ("\n Sr. Cliente %s seu saldo atual e %.2f", cliente, saldo);
        if(saldo < 0){
            printf("\n\t\t\t %s, voce esta usando seu limite!", cliente);
        }
    }

}

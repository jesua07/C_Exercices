#include <stdio.h>

int main()
{
    char nome[20];
    char produto='Brigadeiro';
    float valor, total, valParcela;
    int qtd, parcelas;
    valor = 3.00;
    printf("Digite o seu nome:");
    scanf("%s", &nome);
    printf("Digite a quantidade desejada:");
    scanf("%d", &qtd);
    printf("Digite o numero de parcelas:");
    scanf("%d", &parcelas);
    total = valor * qtd;

    if(parcelas == 1){
        total = total*0.9;
        valParcela = total;
    }else{
        if((parcelas >= 2) && (parcelas<=5)){
            total = total;
            valParcela = total / parcelas;
        }else{
            if((parcelas >=6) && (parcelas <=10)){
                total = total*1.08;
                valParcela = total / parcelas;
            }else{
                total = (total*1.10) + 283.00;
                valParcela = total / parcelas;
            }
        }
    }
        printf("Ola, %s, o valor de sua compra foi de %f, voce ira pagar em %d parcelas, e o valor da parcela e de %f", nome,total,parcelas,valParcela);
}


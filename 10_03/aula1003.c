#include <stdio.h>

int main(void){
    int numero;
    printf ("\nInforme um numero inteiro:\n");
    scanf ("%d", &numero);
    int resultado;
    resultado = numero%2;
    if (resultado == 0)
    {
        printf ("\nO numero %d e par", numero);
        }else{
            printf ("\nO numero %d e impar", numero);

    }


    return 0;
}

#include <stdio.h>

int main()
{
    char nome[20];
    float salario, salarioantigo;
    int idade, nasceu;

    printf("Digite o seu nome:");
    scanf("%s", &nome);
    printf("Digite o seu salario:");
    scanf ("%f", &salario);
    printf("Digite sua idade:");
    scanf("%d",&idade);
    printf("\n");
    printf("\n \t\tFuncionario %s, seu salario e: %f e sua idade e: %d" , nome, salario, idade);
    printf("\n \n");
    nasceu=2023-idade;
    printf("\n Voce nasceu em %d", nasceu);
    if(idade < 18){
        salarioantigo=salario;
        salario=salario*1.05;
    }else{
        salarioantigo=salario;
        salario=salario*1.20;
    }

    printf ("\n %s, o seu salario passou de %f para %f", nome,salarioantigo,salario);
    if (idade>5) && (idade<7){
        printf("\n Funcionario muito novo!!");
    }
}

#include <stdio.h>

//Carlos Henrique Nobrega da Silva e Jesua Isaque Calefi da Silva
int main(void){
      int n, k, nk, operacao, permutacao, arranjo, combinacao, fatN, fatK, fatNK;
  
  printf ("MENU do Carlos e do Jesua\n");
  printf ("1. Permutacao Simples\n");
  printf ("2. Arranjo Simples\n");
  printf ("3. Combinacao Simples\n");
  printf ("4. Sair\n");
  
  scanf("%d", &operacao);
  
  switch (operacao)
  {
    case 1 :
        printf ("Digite o valor de n:\n");
        scanf("%d", &n);
        for (fatN = 1; n > 1; n = n-1)
        {
            fatN = fatN*n;
        }
        permutacao = fatN;
        printf("O numero de permutacoes e de %d\n", permutacao);
        return main();
    break;
    
    case 2 :
        printf ("Digite o valor de n:\n");
        scanf("%d", &n);
        printf ("Digite o valor de k:\n");
        scanf("%d", &k);
        nk = n-k;
        if (n >= k)
        {
            for (fatN = 1; n > 1; n = n-1)
            {
                fatN = fatN*n;
            }

            for (fatNK = 1; nk > 1; nk = nk-1)
            {
                fatNK = fatNK*nk;
            }
            arranjo = fatN / fatNK;
            printf("O numero de arranjos e de %d\n", arranjo);
            return main();
        }else{
            printf("n deve ser maior ou igual a k!\n");
            return main();
        }
        
        
    break;
    
    case 3 :
        printf ("Digite o valor de n:\n");
        scanf("%d", &n);
        printf ("Digite o valor de k:\n");
        scanf("%d", &k);
        nk = n-k;
        if (n >= k)
        {
            for (fatN = 1; n > 1; n = n-1)
            {
            fatN = fatN*n;
            }
            for (fatK = 1; k > 1; k = k-1)
            {
            fatK = fatK*k;
            }
            for (fatNK = 1; nk > 1; nk = nk-1)
            {
            fatNK = fatNK*nk;
            }
            combinacao = fatN / (fatK * fatNK);
            printf("O numero de combinacoes e de %d\n", combinacao);
            return main();
        }else{
            printf("n deve ser maior ou igual a k!\n");
            return main();
        }
    break;
    
    case 4 :
        printf("FIM!");
    break;
    
    default :
    printf ("Opcao invalida!\n");
    return main();
  }
  
  return 0;
}
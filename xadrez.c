#include <stdio.h>


int main(){
    int bispo = 5, rainha = 8, cavalo, movimento_L = 1;

    printf("\n## Jogada para torre: \n");
    for (int torre = 0; torre < 5; torre++){
        printf("Direita\n");
    }

    printf("\n## Jogada para bispo\n");
    while (bispo > 0)
    {
        printf("Direita-Cima\n");
        bispo--;
    }
    

    printf("\n## Jogada para rainha\n");
    do
    {
        printf("Esquerda\n");
        rainha--;
    } while (rainha > 0);
    

    printf("\n## Jogada para cavalo\n");
    while(movimento_L--)
    {
        for(cavalo = 0; cavalo < 2; cavalo++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }


    return 0;
}
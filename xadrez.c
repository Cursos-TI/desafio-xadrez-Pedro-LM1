#include <stdio.h>


int main(){
    int bispo = 5, rainha = 8;

    printf("\n## Movimento para torre: \n");
    for (int torre = 0; torre < 5; torre++){
        printf("Direita\n");
    }

    printf("\n## Movimento para bispo\n");
    while (bispo > 0)
    {
        printf("Direita-Cima\n");
        bispo--;
    }
    

    printf("\n## Movimento para rainha\n");
    do
    {
        printf("Esquerda\n");
        rainha--;
    } while (rainha > 0);
    

    return 0;
}
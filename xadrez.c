#include <stdio.h>

void moverTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}


void moverBispo(int casas){
    if(casas > 0){
        for(int i = 0; i < 1; i++){
            for(int j = 0; j < 1; j++){
                printf("Cima-Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}


void moverRainha(int casas){
    if (casas > 0){
        moverRainha(casas - 1);
        printf("Esquerda\n");
    }
}


void moverCavalo(int casas){
    for(int i = 0; i < 1; i++){     
        for(int j = 1; j < 10; j++){
            if(casas <= j) continue;
            if (j == 8) break; 

            printf("Cima\n");
        }
    printf("Direita\n");    
    }
}


int main(){
    printf("\n");

    printf("\n## Jogada para Torre\n");
    moverTorre(5);

    printf("\n## Jogada para bispo\n");
    moverBispo(5);
    

    printf("\n## Jogada para rainha\n");
    moverRainha(8);
    

    printf("\n## Jogada para cavalo\n");
    moverCavalo(3);


    return 0;
}
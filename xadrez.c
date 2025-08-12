#include <stdio.h>




void moverTorre(int casas) {
    if (casas <= 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1); 
}


void moverBispo(int casas) {
    if (casas <= 0) return; 

   
    for (int v = 1; v <= 1; v++) {
       
        for (int h = 1; h <= 1; h++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1); 
}


void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


void moverCavalo() {
    int casasCima = 2;
    int casasDireita = 1;

    printf("Movimento do Cavalo:\n");

    
    for (int i = 1, j = 0; i <= casasCima; i++, j++) {
        if (i == 2 && j == 1) {
           
        }
        printf("Cima\n");

       
        if (i == casasCima) {
            
            int k = 0;
            while (k < casasDireita) {
                if (k > 2) break; 
                printf("Direita\n");
                k++;
            }
        }
    }
}


int main() {
    
    printf("Movimento da Torre:\n");
    moverTorre(5); // 5 casas
    printf("\n");

    
    printf("Movimento do Bispo:\n");
    moverBispo(5); // 5 casas
    printf("\n");

   
    printf("Movimento da Rainha:\n");
    moverRainha(8); // 8 casas
    printf("\n");

    
   
    moverCavalo();

    return 0;
}
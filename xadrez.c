#include <stdio.h>

int main(){
    int bispo, torre, rainha;
    bispo = 0; torre = 0; rainha = 0;

    printf("Simulação da movimentação das Peças de Xadrez:\n");
    printf("\nDigite 1 para ver os movimentos da Rainha: ");
    scanf("%d");
    
    for (rainha; rainha < 8; rainha++){
        printf("Rainha se moveu para a esquerda\n");
    }

    printf("\nDigite 1 novamente para ver os movimentos do Bispo: ");
    scanf("%d");

    while (bispo < 5){
        printf("Bispo se moveu para a diagonal (Cima, Direita)\n");
        bispo++;
    }
    
    printf("\nDigite 1 novamente para ver os movimentos da Torre: ");
    scanf("%d");
    
    do {
        printf("Torre se moveu para a direita\n");
        torre++;
    } while (torre < 5);
}
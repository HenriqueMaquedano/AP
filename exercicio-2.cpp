#include <stdio.h>
#include <stdlib.h>
int main() {
    int cod, qtd;
    float total;
    printf("Digite o codigo do pedido: \n");
    scanf("%d", &cod);
    printf("Digite a quantidade: \n");
    scanf("%d",&qtd);
    if( cod == 100) {
        total = qtd * 3.0;
        printf("O total eh : %f\n", total);
    } else if( cod == 101) {
        total = qtd * 3.5;
        printf("O total eh : %f\n", total);
    } else if( cod ==102) {
        total = qtd * 4.0;
        printf("O total eh : %f\n", total);
    } else if( cod == 103) {
        total = qtd * 4.2;
        printf("O total eh : %f\n", total);
    } else if( cod == 104) {
        total = qtd * 4.5;
        printf("O total eh : %f\n", total);
    } else {
        printf("O cod nao existe!");
    }
}
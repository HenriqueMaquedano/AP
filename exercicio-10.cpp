#include <stdio.h>
    int main (){
        int atual, ano_serv,nasc,total;
        printf("Digite o ano de nascimento:");
        scanf("%i",&nasc);
        printf("Digite o ano de ingresso no serviço: ");
        scanf("%i",&ano_serv);
        printf("Digite o ano atual: ");
        scanf("%i",&atual);
        
        ano_serv = atual - ano_serv;
        nasc = atual - nasc;
        
        if(nasc >= 65 && ano_serv >= 30 || nasc >= 60 && ano_serv >= 25){
            printf("Sua idade é: %i\n",nasc);
            printf("Sua tempo de serviço é: %i\n", ano_serv);
            printf("Requer aposentaria\n");
        } else {
            printf("Sua idade é: %i\n",nasc);
            printf("Seu tempo de serviço é: %i\n", ano_serv);
            printf("Não requerer\n");
        }
        
        
    
    
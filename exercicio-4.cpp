#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
         float Smedio;

         printf("Informe o saldo medio: ");
         scanf("%f",&Smedio);

         if (Smedio >= 401 && Smedio <= 1000)
             printf("O credito disponivel e: R$ %.2f \n", Smedio*0.10);
         else if (Smedio > 1000)
             printf("O credito disponivel e: R$ %2.f \n", Smedio*0.40);
         else
             printf("Voce nao tem direito a credito nenhum!\n");
 
         system("pause");
         return 0;
}
#include <stdio.h>
#include <math.h>

int main ()
{

float fah,cel;//declaração das variáveis

printf("Digite a temperatura em Celsius: ");
scanf("%f",&cel);//armazena o valor informado no endereço reservado na memória
fah=(cel*1.8)+32;// multiplica a temperatura celsius por 1.8 e no resultado acrescenta 32 //ou utiliza a formula (9/5*30*1.8)+32

printf("A temperatura %.2f em graus Fahrnheit: %.2f",cel,fah);//imprime o resultado. O .2 foi//colocado para reduzir as casas decimais para dois dígitos somente.

}
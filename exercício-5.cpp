#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv) {

float vendas, salariofixo, comissao, salario;

int carros;

printf("Informe o numero de carros vendidos: ");

scanf("%d", & carros);

printf("Informe o valor total de suas vendas: ");

scanf("%f", & vendas);

printf("Informe o salario fixo: ");

scanf("%f", & salariofixo);

printf("Informe o valor por carro vendido: ");

scanf("%f", & comissao);

salario = salariofixo + (comissao * carros) + (vendas * 0.05);

printf("\nSalario final do vendedor: [%0.2f]\n\n", salario);

system("pause");

return 0;

}
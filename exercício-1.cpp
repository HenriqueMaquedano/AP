#include <stdio.h>

#include <stdlib.h>

int main(void)

{

float to, imp, dist, cfab;

printf("Programa: Custo do Consumidor\n");

printf("Insira o custo de fabrica do carro: ");

scanf("%f", &cfab);

imp = (45 * cfab)/100;

dist = (28 * cfab)/100;

to = (cfab + imp + dist);

printf("O custo total do consumidor é: %.2f\n\n", to);

system("pause");

return 0;

}
#include <stdio.h>

int main()
{
 char nome[50];
 char sexo;
 float altura;
 float peso_ideal;

 printf("Informe o nome: ");
 scanf("%s", &nome);

 printf("Informe o sexo (M/F): ");
 scanf("%s", &sexo);

 printf("Informe a altura em metros: ");
 scanf("%f", &altura);

 if(sexo == 'M')
 {
 peso_ideal = (72.7 * altura) - 58;
 }
 else
 {
 peso_ideal = (62.1 * altura) - 44.7;
 }


 printf("\nRESULTADO:\nNome: %s \nAltura: %.3fm \nPeso ideal: %.3fkg", nome,altura,peso_ideal);


 return 0;
}
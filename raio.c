#include <stdio.h>
#include <locale.h> 

#define pi 3.14 /*declara��o de constante */


main()
{
	setlocale(LC_ALL, "Portuguese"); 
	
	float raio, area;
	
	printf("==========Calculo do raio ===========\n\n "); /* o \n � utilizado para inserir quebra de linha */
		
	printf("Insira o raio: ");	
	scanf ("%f", &raio );
	
	area = pi * (raio * raio);
	
	printf(" A �rea da circunfer�ncia � %.2f", area);
	
	getch();
}

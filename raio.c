#include <stdio.h>
#include <locale.h> 

#define pi 3.14 /*declaração de constante */


main()
{
	setlocale(LC_ALL, "Portuguese"); 
	
	float raio, area;
	
	printf("==========Calculo do raio ===========\n\n "); /* o \n é utilizado para inserir quebra de linha */
		
	printf("Insira o raio: ");	
	scanf ("%f", &raio );
	
	area = pi * (raio * raio);
	
	printf(" A área da circunferência é %.2f", area);
	
	getch();
}

/*4) Crie um vetor com 10 números. Imprima os valores do vetor*/

#include <stdio.h>

main()
{
	int numero[10] ={1,2,3,4,5,6,7,8,9,0};
	int cont;
	
	for(cont=0; cont<10; cont++)
	{
		printf("%i", numero[cont]);
	}
}

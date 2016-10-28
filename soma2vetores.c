/*Crie 2 vetores com 5 números. Crie um terceiro vetor com a soma dos vetores*/

#include <stdio.h>

main()
{
	int vetor1[5] = {1,2,3,4,5};
	int vetor2[5] = {6,7,8,9,0};
	int soma[5];
	int cont;
	
	for(cont=0; cont<5; cont++)
	{
		soma[cont] = vetor1[cont] + vetor2[cont];
		printf("%i + %i = %i\n", vetor1[cont], vetor2[cont],soma[cont]);
	}
}

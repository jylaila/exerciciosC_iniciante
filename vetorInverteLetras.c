#include <stdio.h>

/*2) Crie 2 vetores. Receba 10 letras em um deles e copie as letras para o outro vetor
em ordem inversa..*/

main()
{
	char vetor1[10], vetor2[10];
	int cont, cont2=9;
	
	for (cont=0; cont<10; cont++)
	{	
		printf("Digite uma letra para a posicao %d: \n", (cont+1));
		scanf("%s", &vetor1[cont]); /* atribuo valor no vetor*/
		vetor2[cont2] = vetor1[cont] ; /* atribuo valor na posição 9 do vetor2*/
		cont2--; /*decremento o contador*/
	}

	for(cont=0; cont<10;cont++)/*percorro o vetor e mostro na tela*/
	{
		printf("Vetor2 %c\n",vetor2[cont] );
	}
	
	
}

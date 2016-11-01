#include <stdio.h>

/*1) Crie um vetor de inteiros que receba 10 valores e exiba a quantidade
de números positivos e a quantidade de números negativos.*/

main()
{
	int vetor [10]; /*declaração de variáveis */
	int cont, positivo, negativo;	
	
	for (cont=0; cont<10; cont++)
	{	
		printf("Digite um valor para a posicao %d: \n", (cont+1)); 
		scanf("%d", &vetor[cont]); /* atribuo valor no vetor*/
	
		if(vetor[cont] >= 0) /* verifico se o valor é positivo*/
			positivo++;		
		else
			negativo++;				
			
	}
	printf("A quantidade de positivos e %i e de negativos %i", positivo, negativo);
	
}

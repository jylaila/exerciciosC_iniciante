/*3) Crie um vetor de n�meros reais de acordo com o tamanho definido pelo usu�rio. Crie
uma constante com o valor 7,17. Pe�a para o usu�rio inserir os n�meros,� seguir
multiplique pela constante.*/

#include <stdio.h>

main()
{
	#define fixo 7.17
	int tamanho, cont;
	float aux, vetor[tamanho];
	
	printf("Digite o tamanho do vetor: ");
	scanf ("%d", &tamanho);
	
	for(cont=0; cont<tamanho; cont++)
	{
		printf("Insira o valor para a posicao %d: ",cont+1);
		scanf("%f", &aux);
		vetor[cont] = aux*fixo;
	}
	
	for(cont=0; cont<tamanho; cont++)
	{
		printf("Vetor %.2f\n",vetor[cont] );
	}
}

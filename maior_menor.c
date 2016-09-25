#include <stdio.h> 
#include <locale.h> 
/*
	Enunciado: Faça um programa que receba 10 números inteiros,
	mostre os número inseridos, o maior e o menor valor
	*** utilize a estrutura while
*/

main()
{
	setlocale(LC_ALL, "Portuguese"); 
	
	int numero, maior, menor, contador = 0;

	while (contador < 10 ) /*Repete o bloco enquanto a variável de controle (contador) for menor que 10. Observe que a variável foi inicializada em 0, logo o maior valor da variável é 9*/
	{
	
		printf("Insira o %iº numero: ", contador + 1); /*mostra mensagem como "Insira o 1º número, Insira o 2º número etc". Como o contador começa em 0 é necessário acrescentar + 1 */ 
		scanf ("%i", &numero);
		
		/* para saber qual o maior/menor número inserido entre os 10
		é necessário comparar o valor inserido com o valor existente na variável maior/menor e, se esse valor 
		foi maior/menor substituir o valor anterior pelo atual. Como não há nenhum valor
		nas variáveis maior/menor é necessário inicializar as variáveis com o primeiro valor inserido, ou 
		seja, quando o contador estiver em 0, atribuir o número inserido para as variáveis maior/menor, 
		para que nas demais repetições, exista um valor que sirva de parâmetro para a comparação*/
			
		if(contador == 0) 
		{
			maior = numero;
			menor = numero;		    
	
		}
		else
		{
			if(numero > maior) /*numero inserido maior que o valor da variável*/
			{
				maior = numero;
			}
			if (numero < menor) /*numero inserido menor que o valor da variável*/
			{
				menor = numero;
			}
			
		}
		
		contador ++; /*Incremento. Equivale a "contador = contador + 1";*/	
	}
		printf("O maior número é %i e o menor é %i", maior, menor); /*mostro o maior e o menor valor fora do laço*/
		getch(); /*espera até o usuário pressionar uma tecla*/

}


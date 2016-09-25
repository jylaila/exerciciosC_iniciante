#include <stdio.h> 
#include <locale.h> 
/*
	Enunciado: Fa�a um programa que receba 10 n�meros inteiros,
	mostre os n�mero inseridos, o maior e o menor valor
	*** utilize a estrutura while
*/

main()
{
	setlocale(LC_ALL, "Portuguese"); 
	
	int numero, maior, menor, contador = 0;

	while (contador < 10 ) /*Repete o bloco enquanto a vari�vel de controle (contador) for menor que 10. Observe que a vari�vel foi inicializada em 0, logo o maior valor da vari�vel � 9*/
	{
	
		printf("Insira o %i� numero: ", contador + 1); /*mostra mensagem como "Insira o 1� n�mero, Insira o 2� n�mero etc". Como o contador come�a em 0 � necess�rio acrescentar + 1 */ 
		scanf ("%i", &numero);
		
		/* para saber qual o maior/menor n�mero inserido entre os 10
		� necess�rio comparar o valor inserido com o valor existente na vari�vel maior/menor e, se esse valor 
		foi maior/menor substituir o valor anterior pelo atual. Como n�o h� nenhum valor
		nas vari�veis maior/menor � necess�rio inicializar as vari�veis com o primeiro valor inserido, ou 
		seja, quando o contador estiver em 0, atribuir o n�mero inserido para as vari�veis maior/menor, 
		para que nas demais repeti��es, exista um valor que sirva de par�metro para a compara��o*/
			
		if(contador == 0) 
		{
			maior = numero;
			menor = numero;		    
	
		}
		else
		{
			if(numero > maior) /*numero inserido maior que o valor da vari�vel*/
			{
				maior = numero;
			}
			if (numero < menor) /*numero inserido menor que o valor da vari�vel*/
			{
				menor = numero;
			}
			
		}
		
		contador ++; /*Incremento. Equivale a "contador = contador + 1";*/	
	}
		printf("O maior n�mero � %i e o menor � %i", maior, menor); /*mostro o maior e o menor valor fora do la�o*/
		getch(); /*espera at� o usu�rio pressionar uma tecla*/

}


/* isto � um coment�rio. Dependendo da vers�o do compilador, � possivel utilizar //
para coment�rios de uma �nica linha.
 */
 
#include <stdio.h> 	/* biblioteca de entrada e sa�da */
#include <locale.h> /* biblioteca para usar setlocale, caracteres especiais */

main()/* m�todo principal */
{
	/* defini��o do idioma */
	setlocale(LC_ALL, "Portuguese"); 
	
	/* cria��o de vari�veis*/
	float nota, media;
	/* cria��o de vari�vel com atribui��o de valor */
	float somadasnotas = 0;
	int qtdnotas = 0;	

	while(qtdnotas < 3)	/* estrutura de repeti��o */
	{
		printf("Insira a %ia. nota: ", (qtdnotas+1)); 	/* mostra um texto na tela */
		scanf("%f", &nota); 	/* l� o conte�do digitado pelo teclado e armazena na vari�vel "nota" */
		
		somadasnotas = somadasnotas + nota; /* acumulador */
		qtdnotas = qtdnotas + 1; /* contador */
	}
		
		media = somadasnotas/3; /* opera��o de m�dia*/
		printf("A media � %.2f", media); /* %.2f define a quantidade de casas decimais a serem exibidas*/
		
		getch(); /* pausa o programa*/
}

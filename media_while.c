/* isto é um comentário. Dependendo da versão do compilador, é possivel utilizar //
para comentários de uma única linha.
 */
 
#include <stdio.h> 	/* biblioteca de entrada e saída */
#include <locale.h> /* biblioteca para usar setlocale, caracteres especiais */

main()/* método principal */
{
	/* definição do idioma */
	setlocale(LC_ALL, "Portuguese"); 
	
	/* criação de variáveis*/
	float nota, media;
	/* criação de variável com atribuição de valor */
	float somadasnotas = 0;
	int qtdnotas = 0;	

	while(qtdnotas < 3)	/* estrutura de repetição */
	{
		printf("Insira a %ia. nota: ", (qtdnotas+1)); 	/* mostra um texto na tela */
		scanf("%f", &nota); 	/* lê o conteúdo digitado pelo teclado e armazena na variável "nota" */
		
		somadasnotas = somadasnotas + nota; /* acumulador */
		qtdnotas = qtdnotas + 1; /* contador */
	}
		
		media = somadasnotas/3; /* operação de média*/
		printf("A media é %.2f", media); /* %.2f define a quantidade de casas decimais a serem exibidas*/
		
		getch(); /* pausa o programa*/
}

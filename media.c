#include <stdio.h>
#include <locale.h> //biblioteca para utilização do set locale

main()
{
	setlocale(LC_ALL, "Portuguese"); 
	float nota1, nota2, media;
	
	printf("Insira a 1a. nota: ");
	scanf("%f", &nota1);
	
	printf("Insira a 2a. nota: ");
	scanf("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
	if(media < 6)
	{
		printf("Aluno reprovado, conceito 'I''");
	}
	
	else if(media < 8)
	{
		printf("Aluno aprovado, conceito 'R''");
	}
	
	else if(media < 9)
	{
		printf("Aluno aprovado, conceito 'B''");
	}	
	else
	{
		printf("Aluno aprovado, conceito MB");	
	}
	
	printf("A média é %f", media);
	
	getch();
}

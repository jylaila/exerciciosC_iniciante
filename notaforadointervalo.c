#include <stdio.h>
#include <locale.h>

main()
{
	float nota;
	setlocale(LC_ALL, "Portuguese"); 
	
	do{	
		printf("Insira a nota: ");
		scanf("%f", &nota);
	
		if(nota>=0 && nota <=10)
		{
			printf("Nota válida.");
		
		}
		else {
			printf("Nota inválida.");
		}

	}while(nota <=0 && nota >=10);
	
	
	
}

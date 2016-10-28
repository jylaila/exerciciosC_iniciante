#include <stdio.h>

main()
{
	exercicio1();
	exercicio2();
	exercicio3();
	
}

exercicio1()
{
	int i;
	
	printf("====== Numeros de 1 ate 100 ======");
	
	for(i=1; i<=100;i++)
	{		
		printf("\n%i", i);
	}
}

exercicio2()
{
	int cont;
	
	printf("====== Numeros de 100 ate 1 ======");
	
	for(cont=100; cont>=0;cont--)
	{
		printf("\n%i", cont);
	}
}

exercicio3()
{
	int cont;
	
	printf("====== Numeros Pares de 0 ate 1000 ======");
	
	for(cont=0; cont<=1000;cont+=2)
	{
		printf("\n%i", cont);
	}	
}

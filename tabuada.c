#include <stdio.h>

main()
{
	int contador = 1, cont2;
	
	while (contador <=10)
	{
		cont2 = 1;
		printf("======Tabuada do numero %i====== \n", contador);
		
		while (cont2 <= 10)
		{
			printf("  | %i x %i = %.2i", contador, cont2, (contador*cont2));
			printf(" | \n");
			cont2++;
		}
		
		contador++;
		printf("\n");
	}
	
	getch();
}

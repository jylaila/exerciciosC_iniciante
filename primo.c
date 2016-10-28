#include <stdio.h>

#define TRUE 1
#define FALSE 0

main()
{
    int n, d, positivo;			
 
    printf("Forneca um numero inteiro positivo ===> ");
    scanf("%d", &n);
    printf("Inteiro dado = %d \n", n);


    if (n <= 1 || (n != 2 && n % 2 == 0))
		positivo = FALSE;
    else
		positivo = TRUE;

    d = 3;
    while (positivo  && d <= n / 2) {
	if (n % d == 0)
	    positivo = 0;
	d = d + 2;	
    }

    if (positivo)
	printf("%d e' primo \n", n);
    else
	printf(" %d nao e' primo \n", n);

}


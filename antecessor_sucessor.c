#include <stdio.h> 
#include <locale.h> /*biblioteca para utiliza��o do set locale*/

main()
{
	setlocale(LC_ALL, "Portuguese"); 
	
	int n,a,s;
	
	printf("Insira um n�mero: ");
	scanf ("%i", &n);
	
	a = n-1;
	s = n+1;
	
	printf("O antecessor �: %i", a );
	
	getch();
}


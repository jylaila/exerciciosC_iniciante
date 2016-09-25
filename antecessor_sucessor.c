#include <stdio.h> 
#include <locale.h> /*biblioteca para utilização do set locale*/

main()
{
	setlocale(LC_ALL, "Portuguese"); 
	
	int n,a,s;
	
	printf("Insira um número: ");
	scanf ("%i", &n);
	
	a = n-1;
	s = n+1;
	
	printf("O antecessor é: %i", a );
	
	getch();
}


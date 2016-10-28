#include <stdio.h>

main()
{
	int numero;
	
	char letra[26] = {'a','b','c','d','e','f','g','h','i','j',
	'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	printf("Digite um numero:" );
	scanf("%i", &numero);
	
	printf("A letra correspondente eh: %c", letra[numero]);
	
}

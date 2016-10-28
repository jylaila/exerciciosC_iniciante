#include <stdio.h>

main()
{
	int cont;
	
	char letra[26] = {'a','b','c','d','e','f','g','h','i','j',
	'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	char letra2[26];
	
	/*atribuir valor */
	for(cont=0; cont<26; cont++)
	{
		letra2[cont] = letra[cont];	
		
	}
	/*imprimir vetor letra 2*/
	for (cont=0; cont<26; cont++)
	{
		printf("%c", letra2[cont]);
	}
	
		/*imprimir de trás pra frente */
	for (cont=26; cont>=0; cont--)
	{
		printf("%c", letra2[cont]);
	}
}



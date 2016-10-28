main()
{
	int vetor1[5] = {1,2,3,4,5};
	int vetor2[5] = {6,7,8,9,0};
	int vetorzao[10];
	int cont, cont2=5;
	
	for(cont=0; cont<5; cont++)
	{
		vetorzao[cont] = vetor1[cont];
		vetorzao[cont2] = vetor2[cont];
		cont2++;
	}
	for (cont=0; cont<10; cont++)
	{
		printf("%i", vetorzao[cont]);
	}
	
}

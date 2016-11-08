#include <stdio.h>

main()
{
	float vet1[9] = {7,10,15,14,78,9,3,5,2};
	float vet2[3] = {15,100,3.7};
	float resultado[9];
	
	int i, w;
	
	for(i=0; i<3; i++)
	{
		for (w=0; w<9; w++)
		{
			resultado[w] = vet2[i] * vet1[w];
			printf("%.2f * %.2f = %.2f \n", vet2[i], vet1[w], resultado[w]);
		}
		
		printf("\n");
	}
}

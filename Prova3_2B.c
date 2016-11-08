#include <stdio.h>

main()
{
	float x[9] = {15,37,14,9,10,7,2.8,8,9};
	float y[3] = {2,5,1};
	float resultado[9];

	int i, w;
	
	for(i=0; i<3; i++)
	{
		for (w=0; w<9; w++)
		{
			resultado[w] = y[i] + x[w];
			printf("%.2f + %.2f = %.2f \n", y[i], x[w], resultado[w]);
		}
		
		printf("\n");
	}
}

#include <stdio.h>

main(){
	
	int i;
	int j;
	
	for(i=1; i<=10;i++)
	{
		printf("Tabuada do numero %i\n", i);
		
		for(j=1; j<=10; j++)
		{
			printf("%i x %i = %i \n", i, j, (i*j));
		}		
		
	}
}



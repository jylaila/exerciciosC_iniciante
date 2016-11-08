#include <stdio.h>

main()
{
	int v[8] = {5,1,4,2,7,8,3,6};
	int i, aux;
	
	for(i=8; i>1; i--)
	{
		aux = v[i];
		v[i] = v[8-i+1];
		v[8-i+1] = aux;
	}
	
	v[3] = v[1];
	v[v[3]] = v[v[2]];
	
	for (i=0; i<8; i++)
	{
		printf("%i  ", v[i]);
	}
	
}

#include <stdio.h>

main()
{
	float nota[4];
	float media, somanota;
	int i;
	
	printf("Digite 4 notas");
	for(i=0; i<4; i++)
	{
		scanf("%f", &nota[i]);
		somanota = somanota + nota[i];
	}
	media = somanota/4;	
	printf("A media e %.2f", media);

}

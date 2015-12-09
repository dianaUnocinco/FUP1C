#include <stdio.h>

int identidad [3][3];
int i;
int j;

int main ()
{
	
	printf("La matriz es:\n");
	
	
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Identidad[%d][%d]",i+1,j+1);
			scanf("%d",&identidad[i][j]);
			
		}
	}
	printf("\n");
	printf("Esta es la matriz:\n");
	printf("MATRIZ ORDENADA");
	
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d",identidad[i][j]);
		}
	}
	printf("\n");
	
	
}

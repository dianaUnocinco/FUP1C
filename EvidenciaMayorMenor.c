#include <stdio.h>

int arreglo[20];
int mayor=0;
int numMayor=60000;
int i;
int j;


int main()

{
		printf("Programa que ordene un arrreglo de 20 elementos de mayor a menor\n");
		
		for(i=0;i<20;i++)
		{
			printf("Dame un numero: ");
			scanf("%d",&arreglo[i]);
		}	
		
		for(j=0;j<20;j++)
	{
		mayor=0;
		for(i=0;i<20;i++)
		{
			if(arreglo[i]>mayor && arreglo[i]<numMayor)
			{
				mayor = arreglo[i];
			}
		}
	printf("El orden de mayor a menor es: %d\n",mayor);
	numMayor=mayor;
	}
}

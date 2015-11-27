#include <stdio.h>

int arreglo[10];
int i,j;
int mayor=0;
int masGrande=60000;

int main()
{
	printf("Programa que...\n");
		
		for(i=0;i<10;i++)
		{
			printf("Dame un numero: ");
			scanf("%d",&arreglo[i]);
		}
	
	
	for(j=0;j<2;j++)
	{
		mayor=0;
		for(i=0;i<10;i++)
		{
			if(arreglo[i]>mayor && arreglo[i]<masGrande)
			{
				mayor = arreglo[i];
			}
		}
	printf("El numero mayor es: %d\n",mayor);
	masGrande=mayor;
	}
	
	
		
}

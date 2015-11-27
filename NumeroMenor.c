#include <stdio.h>

int arreglo[10];
int i,j;
int menor=60000;
int masPeque=-10000;

int main()
{
	printf("Programa que averigua el numero menor...\n");
	
	
	
		for(i=0;i<10;i++)
		{
			printf("Dame un numero: ");
			scanf("%d",&arreglo[i]);
		}
	
	
	for(j=0;j<2;j++)
	{
		menor=60000;
		for(i=0;i<10;i++)
		{
			if(arreglo[i]<menor && arreglo[i]>masPeque)
			{
				menor = arreglo[i];
			}
		}
	printf("El numero menor es: %d\n",menor);
	masPeque=menor;
	}
	
	
		
}

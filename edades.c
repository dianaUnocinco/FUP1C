#include<stdio.h>
#include<stdlib.h>

int edad;

int main()

{
	printf("Programa que te dice en que etapa de la vida est�s seg�n tu edad.");
	printf("Introduce tu edad.");
	scanf("%d", &edad);
	printf("Tu edad es: %d\n",edad);
	
	
	if(edad <=2)
	{
		
	printf("La etapa en la que est�s es: Beb�.");
	}
	else
		{
		if(edad<=12)
		printf("La etapa en la que est�s es: Ni�o.");
		}
		else
			{if(edad<=18)
			}

	
	
	

	system("pause");
}

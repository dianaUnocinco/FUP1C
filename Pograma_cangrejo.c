#include <stdio.h>

int retrocede;
int avanza;
int profundidad;
int i;
int dia;

int main()

{
	printf("Programa que simula a un cangrejo callendo a un hoyo\n");
	
	printf("Ingresa la profundida del hoyo\n");
	scanf("%d",&profundidad);
	printf("Ingresa la cantidad de metros que avanza en el día\n");
	scanf("%d",&avanza);
	printf("Ingresa la cantidad de metros que retrocede en la noche: \n)");
	scanf("%d",&retrocede);

	if(retrocede<avanza)	
	{
		i=0;
		dia=0;
		while (i<profundidad)
		{
			i = i + avanza;
			if(i<profundidad) 
			{
			i= i - retrocede;
			}
			dia++;								
		}
			printf("El numero de dias que se tardo el cangrejo en salir fue %d dias\n",dia);
	}
		
		
	if(retrocede>=avanza)
		{
			printf("El cangrejo no saldra nunca MALDICION!!");
		}
		
	}


#include <stdio.h>
#include <stdlib.h>

int valor;
int i=1;
int suma;
float division;

int main()
{
	
	printf("Programa que obtiene el promedio de 10 numeros.\n");
	suma = 0;
	while(i <= 10)
	{
		printf("Dame un numero\n");
		scanf("%d",&valor);
		suma = suma + valor;
		i= i + 1;
		
	}
	division =(float)suma/10;
	printf("El promedio de los 10 numeros es %f\n", division);
	system("pause");
}

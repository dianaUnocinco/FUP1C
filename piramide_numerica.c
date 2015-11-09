#include <stdio.h>
#include <stdlib.h>

int valor;
int i=1;
int suma;
float division;

int main()
{
	
	printf("Programa piramide numerica.\n");
	suma = 0;
	while(i <= 3)
	{
		printf("Dame un numero\n");
		scanf("%d",&valor);
		suma = suma + valor;
		i= i + 1;
		
	}
	division =(float)suma/3;
	printf("El promedio de los 3 numeros es %f\n", division);
	system("pause");
}

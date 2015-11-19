#include <stdio.h>

int cal[10];
float prom;
int cali;
int suma;
int i;

int main ()

{

	for(i=0;i<10;i++)
	{
	
	printf("Dame una calificacion:");
	scanf("%d",&cali);
	
	cal[i]=cali;
	suma=suma+cali;

	}
	
	prom=suma/10;

	printf("El promedio de las calificaciones ingresadas es: %f",prom);

}

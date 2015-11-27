#include <stdio.h>

int cal[10];
int posibles[10];
float prom;
int cali;
int suma;
int i;
int mayor;
int posMayor;
int bandera=0;

int main ()

{

	for(i=0;i<10;i++)
	{
	
	printf("Dame una calificacion:");
	scanf("%d",&cal[i]);
	
	suma=suma+cal[i];

	}
	
	prom=suma/10;
	
	for (i=0;i<10;i++)
		{
			posibles[i]=0;
		}	
	
	for (i=0;i<10;i++)
		{
			posibles[cal[i]]++;
		}
	
	posMayor=0;
	mayor=posibles[0];
	
	for(i=1;i<11;i++)
		{
			if(posibles[i]==mayor)
			{
				bandera=1;
			}
		
			if(posibles[i]>mayor)
			{
				mayor = posibles[i];
				posMayor = i;
				bandera = 0;
			}
		
		
		}
	
	if(bandera == 0)
		{
			printf("La moda es: %d\n",posMayor);
		}
	
	else
		{
			printf("No existe la moda\n");
		}
	
	printf("El promedio de las calificaciones ingresadas es: %f\n",prom);
	

}

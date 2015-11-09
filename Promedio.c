#include <stdio.h>
#include <stdlib.h>

int a, b, c, d, e, f, g, h, i, j;
int principio;
int final;
int main()

{
	printf("Programa que obtiene el promedio de diez numeros.\n");
	printf("Introducir primer numero\n");
	scanf("%d",&a);
	
	printf("Introducir segundo numero\n");
	scanf("%d",&b);
	
	printf("Introducir tercer numero\n");
	scanf("%d",&c);
 
	printf("Introducir cuarto numero\n");
	scanf("%d",&d);

	printf("Introducir quinto numero\n");
	scanf("%d",&e);

	printf("Introducir sexto numero\n");
	scanf("%d",&f);

	printf("Introducir septimo numero\n");
	scanf("%d",&g);

	printf("Introducir octavo numero\n");
	scanf("%d",&h);

	printf("Introducir noveno numero\n");
	scanf("%d",&i);

	printf("Introducir decimo numero\n");
	scanf("%d",&j);

	principio=0;
	final=10;
	
	while (principio<=final)
	
	{
		principio=a+b+c+d+e+f+g+h+i+j;
		final=principio/10;
		printf("%d\n",final);
	}
	

	system("pause");
}

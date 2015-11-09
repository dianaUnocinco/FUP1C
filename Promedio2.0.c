#include <stdio.h>
#include <stdlib.h>

int a, b, c, d, e, f, g, h, i, j, k, l, m, n;
int principio;
int final;
int numeros;
int main()

{
	printf("Programa que obtiene el promedio de diez numeros.\n");
	
	while(numeros<=1)
	{
	printf("Introducir numeros a promediar\n");
	scanf("%d",&numeros);
	}
	
	while(numeros<=2)
	{
	printf("Introducir primer numero\n");
	scanf("%d",&a);
	}
	
	while(numeros<=3)
	{
	printf("Introducir segundo numero\n");
	scanf("%d",&b);
	}
	
	while(numeros<=4)
	{
	printf("Introducir tercer numero\n");
	scanf("%d",&c);
	}
	
	while(numeros<=5)
	{
	printf("Introducir cuarto numero\n");
	scanf("%d",&d);
	}

	while(numeros<=6)
	{
	printf("Introducir quinto numero\n");
	scanf("%d",&e);
	}

	while(numeros<=7)
	{
	printf("Introducir sexto numero\n");
	scanf("%d",&f);
	}

	while(numeros<=8)
	{
	printf("Introducir septimo numero\n");
	scanf("%d",&g);
	}

	while(numeros<=9)
	{
	printf("Introducir octavo numero\n");
	scanf("%d",&h);
	}

	while(numeros<=10)
	{
	printf("Introducir noveno numero\n");
	scanf("%d",&i);
	}
	
	while(numeros<=11)
	{
	printf("Introducir decimo numero\n");
	scanf("%d",&j);
	}
	
	while(numeros<=12)
	{
	printf("Introducir onceavo numero\n");
	scanf("%d",&k);
	}
	
	while(numeros<=13)
	{
	printf("Introducir doceavo numero\n");
	scanf("%d",&l);
	}
	
	while(numeros<=14)
	{
	printf("Introducir treceavo numero\n");
	scanf("%d",&m);
	}
	
	while(numeros<=15)
	{
	printf("Introducir catorceavo numero\n");
	scanf("%d",&n);
	}
	
	principio=0;
	final=10;
	
	while (principio<=final)
	
	{
		principio=a+b+c+d+e+f+g+h+i+j+k+l+m+n;
		final=principio/numeros;
		printf("%d\n",final);
	}
	

	system("pause");
}

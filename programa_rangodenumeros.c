#include <stdio.h>

int a;
int b;
int i;

int main()

{
	printf("Progrma que muestra los numeros entre un rango\n");
	printf("Dame un numero que indique el inicio del rango\n");
	scanf("%d",&a);
	printf("Dame un numero que indique el fin del rango\n");
	scanf("%d",&b);
	
	
	
	if(a>b)
	{
		i=a;
		while(i>=b)
		{
		i--;
		printf("%d",i);
		}
	
	}
	else
	{
		i=a;
		while(i<=b)
		{
		i++;
		printf("%d",i);
		}		
	}
	
	
}

#include <stdio.h>

int num;
int residuo;
int main ()
{
	printf("Dame un numero para descomponer");
	scanf("%d",&num);
	do
	{
		residuo = num%10;
		num= num/10;
		printf("El digito es %d\n",residuo);
	}while (num!=0);
	
}


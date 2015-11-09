#include <stdio.h>

int j;
int i;
int final;

int main()

{
	printf("Progrma que bla bla bla\n");
	printf("Dame un numero\n");
	scanf("%d",&final);
	i=1;
	while(i<=final)
	{
		j=1;
		while(j<=i)
		{
			printf("%d",i);
			j++;
		}
		printf("\n");
		i++;
	}
}

#include <stdio.h>
#include <stdlib.h>


int opc;
int compra;
int ganancias;
int main ()
{
    printf("*****Tiendita*****\n");
    printf("Si quieres realizar una compra presiona 1.\n" "Si quieres conocer las ganancias presiona 2.\n");
    scanf("%d",&opc);
    ganancias = 500;
    
		switch (opc)
    	{
           case 1:
                {
                printf("MENU:\n" "1:REFRESCO \n" "2:AGUA \n" "3:PAPAS \n" "4:CACAHUATES \n" "5:CHOCOLATE\n");
                scanf("%d",&compra);
                     
					 switch (compra)
                     {
                     	case 1:
                     		{
                     		printf("El refresco tiene un costo de $10.00\n");
                     		}
						break;
		                
						case 2:
							{
   		   					printf("El agua tiene un costo de $10.00\n");
							}
						break;
						
						case 3:
							{
							printf("La papas tienen un costo de $5.00\n");
							}
						break;
						
						case 4:
							{
							printf("Los cacahuates tienen un costo de $4.00\n");
							}
						break;
						
						case 5:
							{
							printf("El chocolate tiene un costo de $8.00\n");
							}
						break;
						
						default :
							{
							printf("Caracter invalido");
							}	
					 }
                }
				break;
           case 2:
            	{
            	printf("Las ganancias totales son: %d",ganancias);
				}
				break;
			default :
			{
			printf("sintaxis error!!!!");
			}	
    }
}

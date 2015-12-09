#include<stdio.h>
#include<stdlib.h>
int b;
int cont; 
int cont2; 
char buscar[20];
char reemplazar;
int  i;
int j;
char c;
char x;
int lim;
char nombre[50];
int compara;
	
int main()


{


x='\0';			
c='\0';	
i=0;
j=0;

           
            printf("ingrese  el nombre   ");

           while(c!='\n'){

               scanf("%c",&c);
               nombre[i]=c;
               i++;
             } 
             cont=i;
             
             printf("ingrese la subcadena\n\n");
               while(x!='\n'){

               scanf("%c",&x);
               buscar[j]=x;
               j++;
             } 
             cont2=j;
             lim=1;
             lim=cont-cont2;
             
            if(cont>cont2){
		
                  for(i=0; i<=lim; i++)
		     	     {
                           
                                b=0;
                            for(i=0;  i<=cont;  i++)
			               {
			                
			                     if(buscar[b]==nombre[i])
			                     {
			                           b=b+1;
			                           if(b==cont2){printf("subcadena  encontrada  \n ");
                                 printf("ahora ingresa la  subcadena   a  reemplazar \n");
                                 
                                     
                                        }else{}
                                }else{}
                           }
			         
		       	       }
		    
			        
		          }else{
			
			
		   	           printf("NO  SE  ENCUENTRA ");
	          	}
			
			
             
            
			  
system("pause");             
}


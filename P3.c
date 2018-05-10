//Giovanna Lara Cabrera Gaspar 11721ECP008
#include<stdio.h>

       int decibina( x)
		{  int i,nb;
		   for(nb=31;nb>=0;nb--)
		   { i=x>>nb;
		     if(i&1){
		     	printf("1");
			 }
			 else { printf("0");
			 }
		 }
	
        }
int main ()
{ 
int nb,menu,i,x,y;

printf("Calculadora de operacoes digite sua opcao : \n 1_Not  \n 2_And \n 3_Or  \n 4_Xor \n 5_Right Shift \n 6_Left Right\n \n" );
scanf ("%d",&menu); getchar();
		
		switch (menu)
{
	case 1:
     
		printf("\nDigite o numero\n",x);
		scanf( "%d", &x);
printf(" NOT %d(",x);
    decibina(x);
printf( ") : %d(",~x);
  decibina(~x);
  
     printf(" )\n");
	


	break;
	
	case 2:
		
	printf("\nDigite o numero\n\n",x,y);
		scanf( "%d %d", &x ,&y);
 printf("%d ( ",x);
 decibina(x); 
printf(" ) AND %d (",y);
decibina(y);
printf( " ) : %d (",x&y);
decibina(x&y);
printf(" )");
 
		break;
	case 3:
	
printf("\nDigite o numero\n\n",x,y);
		scanf( "%d %d", &x ,&y);
printf("%d ( ",x);
decibina(x);
printf(" ) OR %d (",y);
decibina(y);
printf(" ) : %d (",x|y);
decibina(x|y);
printf(")");
	
		break;
	case 4:
	printf("\nDigite o numero\n\n",x,y);
		scanf( "%d %d", &x, &y);
printf("%d (",x);
decibina(x); 
printf(") XOR %d (",y);
decibina(y);
printf(" ): %d (", x^y);
decibina(x^y);
printf(")");
break;
	case 5:
	printf("\nDigite o numero\n\n",x,y);
		scanf( "%d %d", &x ,&y);	
printf("%d (",x);
decibina(x);
printf(" )>> %d (",y);
decibina(y);
printf("): %d ( " ,x>>y);
decibina(x>>y);
printf(")");

		break;
	

     case 6:
     	printf("\nDigite o numero\n\n",x,y);
		scanf( "%d %d", &x, &y);
		printf("%d (",x);
		decibina(x);
		printf(" ) << %d (" , y);
		decibina(y);
		printf (" ) : %d (",x<<y);
		decibina(x<<y);
		printf(")");
		
		break;
	}
return 0;

}

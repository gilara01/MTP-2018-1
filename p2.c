// Giovanna Lara Cabrera Gaspar 11721ECP008
#include <stdio.h>





int main()
{
	char vet[200];
	int nb,menu,num=0,i=0,x=0;
	
	{
		
		printf("\n  Voce deseja converter:\n 1_ Binario para decimal \n 2_ Binario para hexadecimal \n 3. Hexadecimal para Decimal  \n 4_ Hexadecimal para binario \n 5_ Decimal para binario \n 6_ Decimal para hexadecimal \n 7_ Octal para decimal \n 8_ Decimal para octal \n 9_ Sair do programa");
		scanf ("%d",&menu);
		
		switch (menu)
		{
		case 1:
			printf ("Digite o numero em binario: \n");
			scanf("%s",vet);
				getchar ();
	
		num=0;
		
    		for(i=0;vet	[i]!= '\0';i++){
        	if(vet	[i] == '1')
                num = (num*2)+1;
        	if(vet	[i] == '0')
                num = (num*2);}
                printf("%s  eh: %d\n",vet,num);
			break;
			
		case 2:
			printf ("Digite o numero em binario: \n>");
			scanf("%s",vet);
				getchar ();
			
				
		num=0;
		
    		for(i=0;vet	[i]!= '\0';i++){
        	if(vet	[i] == '1')
                num = (num*2)+1;
        	if(vet	[i] == '0')
                num = (num*2);
	}
			printf("%s  eh: %X\n",vet,num);
			break;
		case 3:
			printf ("Digite o numero em hexadecimal: \n");
			scanf("%X",&x);
				getchar();
		
			printf("%X eh: %d\n",x,x);
		
		
			break;
		case 4:
			printf ("Digite o numero em hexadecimal: \n");
			scanf("%X",&x); 
				getchar();
		
			printf("%X  eh: ",x);
			for(nb = 0; x >= (1 << nb); nb++);
			for(i=nb-1;i>=0;i--){
				if(x	%2==0){
					vet	[i] = 0;
				}else{
					vet	[i]= 1;
				}x = x /2;
			}
			for(i=0;i<=nb-1;i++){
				printf("%d", vet[i]);
			}
			
			
			
			break;
		
		
	
		case 5:
			printf ("Digite o numero em decimal: \n");
			scanf("%d",&x	); 
				getchar();
			printf("%d  eh: ",x	);
			for(nb = 0; x	 >= (1 << nb); nb++);
			for(i=nb-1;i>=0;i--){
				if(x	%2==0){
					vet	[i] = 0;
				}else{
					vet	[i]= 1;
				}x= x	/2;
			}
			for(i=0;i<=nb-1;i++){
				printf("%d", vet[i]);
			}
			break;
			
			case 6:
			printf ("Digite o numero em decimal: \n");
			scanf("%d",&x);
				getchar();
			printf("%d em hexadecimal eh: %X\n",x,x);
			
			break;
		case 7:
			printf ("Digite o numero em octal: \n>");
			scanf("%o",&x); 
				getchar();
			printf("%o  eh: %d\n",x,x);
			break;
			
		case 8:
			printf("Digite o numero em decimal: \n>");
			scanf("%d",&x); 
				getchar();
			printf("%d em octal eh: %o\n",x,x);
			break;
		}
		
		return 0;
		}}

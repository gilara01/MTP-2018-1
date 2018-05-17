//Giovanna Lara Cabrera Gaspar 11721ECP008
#include <stdio.h>

int main()
{	char str[256];
	char *p;
	int i, txt[256], opcao;
	int *ps;

	do{printf(" \n1 - Codificar \n2 - Decodificar \n3 - Sair do programa  ");
	scanf("%d", &opcao);
	getchar(); 
	
	switch(opcao)
	{
			case 1:
			gets(str);
		
		int *ps;
		
		for(i=0; str[i]!='\0'; i++)
		
		{
			ps = (int*) &str[i];
			if(str[i]!='\0')
				printf("%d, ", *ps);
				
			else
				printf("%d", *ps);		
				
		}
			
		case 2:
			int num[64];
		char dec;
		
		for(i=0; i<64; i++)
		{
			scanf("%d%c", &num[i], &dec);
			if(dec!=',')
				break;
		}
		
		printf("%s", &num);
	
		 	

}


}
 while  (opcao!=3);

}

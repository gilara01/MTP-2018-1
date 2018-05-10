
//Giovanna Lara Cabrera Gaspar 11721ECP008
#include<stdio.h>

int main()
{
	
	char x[256];
	scanf("%s", x);
	int i=0, cum=0;
	
	while(x[i]!='\0')
{
    if(x[i]>=48&&x[i]<=57)
		cum=cum*10+x[i]-48;
				i++;
}
	printf("%d", cum);
	return 0;
}

// Giovanna Lara Cabrera Gaspar 11721ECP008


#include <stdio.h>
int A(int m, int n)
{
    if (m==0)
    
    
        return n+1;
        
    else if (m>0 && n==0)
    
    
        return A(m-1, 1);
        
    else if (m>0 && n>0)
    
        return A(m-1, A(m, n-1));
        
}  



int main ()
{
	int n=0, m=0;
	printf("Digite um valor para m :");
	scanf("%d", &m );
	getchar();
	  printf("\nDigite um valor para n :");
    	scanf("%d", &n );	 
	    getchar();
	
	printf("= %d", A(m, n));
	return 0;
}

//Giovanna Lara Cabrera Gaspar 11721ECP008
#include <stdio.h>

int main()
{
    int a, b;
    char c[256];
    scanf("%s", &c);
    for(b=0;c[b]!='\0'; b++)
    {
        if(a==0)
        {
            if((c[b]=='0')?(a = 0):(a = 1));
        }
       else if(a==1)
        {
            if((c[b]=='1')?(a = 0):(a = 2));
    }
        else if(a==2)
        {
            if((c[b]=='1')?(a = 2):(a = 1));
        }
    }
      
        printf ("%s\n",(a == 0)? "eh multiplo de 3 ": "nao eh ");

  
    
    
       
}



 // Giovanna Lara Cabrera Gaspar 11721ECP008
 
 
 #include <stdio.h>
 
 int calculaso (int x[20],int j)
 
 {  
   int i,quatso=0;
     for(i=0 ; i<j;i++)
         { quatso+=x[i];
         
	     }
    return(quatso);
 
 
 }
 float calculame ( int quatso, float n)
 {
       float med;
       med=quatso/n;
       return med;
        
 
}
 int main()
 {
 	int num[20];
 	int quatso,i,nunu;
 	
 	do{
	 
 	printf("Digite a quantidade de numeros a ser calculado (De 5 `a 20 numeros):");
 	
 	 scanf ("%d",&nunu);
 	 getchar();
       }
 	
 	while (nunu<5 || nunu >20);
 	
 	for(i=0;i<20;i++)
 	  { num[i]=0;
	  }
 	for (i=0;i<nunu;i++)
 	  { printf(" %d numero:",i+1);
 	    scanf("%d", &num[i]);
 	    getchar();
 	
 	  	
	   }
 	quatso= (calculaso(num,i));
 	
 	
 	printf(" A media dos %d numeros deu %f ",nunu, calculame( quatso,nunu )  );
 	return 0;
 }

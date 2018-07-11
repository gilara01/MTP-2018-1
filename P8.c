//Giovanna Lara Cabrera Gaspar 11721ECP008
#include <stdio.h>
#include <stdlib.h>

void gera_numeros(float * vetor, int tam) 
{
    int i;
    float num;
    for(i = 0; i < tam; i++)
      vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
            
}

float somator(float *inicio_vetor, float *fim_vetor)
{
	float x;
	x = *inicio_vetor;
	 
	

	if(inicio_vetor != fim_vetor)
	{
		return( x + somator(inicio_vetor + 1, fim_vetor));
		
    }
	else
	return (x);
	
}
float produtor(float *inicio_vetor, float *fim_vetor)
{
	float x;
	x = *inicio_vetor;
	 


	if(inicio_vetor != fim_vetor)
	{
		return( x * somator(inicio_vetor + 1, fim_vetor));
		
    }
	else
	return (x);
	
}

int main ()
{
	srand(123456);
	int op;
	float vetor[100], soma = 0, produto = 0;
	
	gera_numeros(vetor, 100); 
	
	

	printf("Selecionar: \n  1-somatorio \n2-produtorio");
	
	scanf("%d", &op);
	getchar();
	
	switch (op)
	{
		case 1:
		   	soma = somator(vetor, vetor + 100);
		   	printf("%f\n", soma);
		break;
		case 2:
		    produto = produtor(vetor, vetor + 100);
		   	printf("%f\n", produto);
		break;
	}

	
	return 0;
}

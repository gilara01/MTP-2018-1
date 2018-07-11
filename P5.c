//Giovanna Lara Cabrera Gaspar 11721ECP008
#include <stdio.h>
int main(){
    int i=0,opcao,num[64];
    char str[255];
    int pi = (int)str;
    char ps = (char)&num;
    do{printf("1 - Codificar\n2 - Decodificar\n3 - Sair do programa\nOpcao: ");
    scanf("%d",&opcao);
    getchar(); 
    switch(opcao){
        case 1:
               printf("Insira a frase: ");
            fgets(str,255,stdin);
            for(i=0; str[i]!='\0'; i++){
                if(str[i]==10){
                    str[i]==0;
                }
            }
            while(pi!=0){
                printf("\nResultado obtido: %d",pi);
                pi++;
            }
            printf("\n\n");
            break;
        case 2:
            for(i=0; i<64; i++){
                scanf("%d",&num[i]);
                if(getchar()=='\n'){
                    break;
                }
            }
            printf("\nResultado Obtido: ");
            while(ps!=0){
                printf("%c",ps);
                ps++;
            }
            printf("\n\n");
            break;
    }
    }while(opcao!=3);
    if(opcao<0 || opcao>2){
        return 0;
    }
}

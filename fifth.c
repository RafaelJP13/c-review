#include<stdio.h>


/* Uso de array para armazenar a média também, nao quis usar outra variável para isso, mas poderia ser feito sem problemas. 
O programa lê 3 notas, calcula a média e armazena na quarta posição do array, depois exibe a média. */

int main(){

    float scores[4];
    float total = 0;
    int i = 0;
    
    for(; i < 3; ++i){
        
        printf("Digite o %iº valor: ", i + 1);
        scanf("%f", &scores[i]);
        
        if(i == 2){
                
            scores[3] = (scores[0] + scores[1] + scores[2]) / 3;
            
        }
        
    }
    
    printf("A sua nota é: %.2f", scores[3]);
    
    return 0;

}
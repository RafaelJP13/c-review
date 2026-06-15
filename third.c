#include<stdio.h>

int main(){
    
    float number1 = 0, number2 = 0, bigger = 0;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &number1);
    
    printf("Digite o segundo número:");
    scanf("%f", &number2);
    
    if(number1 > number2){
            
        bigger = number1;
        
    }else{
            
        bigger = number2;
        
    }
    
    printf("O maior número é: %.2f", bigger);

    return 0;
}
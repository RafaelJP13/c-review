#include<stdio.h>

int main(){
    
    float grade1 = 0, grade2 = 0, grade3 = 0, average = 0;
    int total = 3;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &grade1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &grade2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &grade3);
    
    average = (grade1 + grade2 + grade3) / total;
    
    printf("A média foi: %.2f", average);
    
    return 0;
    
}
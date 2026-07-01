// Inversão de ordem de array.

#include <stdio.h>

int main() {
    
    int numbers[5] = {1,2,3,4,5};
    int reversedNumbers[5];
    
    for(int i = 0; i < 5; i++){
        
        reversedNumbers[i] = numbers[4 - i];
        
    }

    for(int j = 0; j < 5; j++){
        
        printf("%d", reversedNumbers[j]);
        
    }

    return 0;
    
}
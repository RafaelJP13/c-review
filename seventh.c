// Fibonacci
#include <stdio.h>

int main() {
    
    int a = 0, b = 1, next;
    
    printf("0");
    
    for(int i = 0; i <= 5; i++){
        
        printf("%d", b);
        next = a + b;
        a = b;
        b = next;
    
    }
    

    return 0;
}
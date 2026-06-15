#include<stdio.h>

int main(){

	int number = 0;

	printf("Digite o numero desejado:");
	scanf("%d", &number);

	if(number % 2 == 0){
		
		printf("O número é par");
	
	}else{

		printf("O número é impar");

	}

	return 0;
	
}
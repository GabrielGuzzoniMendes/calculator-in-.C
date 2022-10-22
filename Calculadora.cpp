#include <stdio.h>
#include <iostream>
#include <math.h>

main(){
	
	int a=0;
	float b=0;
	float c=0;
	float resultado=0;
	
	printf("Escolha uma das opções \n");
	printf("1.Soma\n");
	printf("2.Subtracao \n");
	printf("3.Divisao \n");
	printf("4.Multiplicacao \n");
	printf("5.Raiz quadrada \n");
	printf("6.Potencia \n");
	scanf("%i",&a);
	
	system("cls");
	
	if(a==1){//soma
		
		printf("Digite o primeiro numero: \n ");
		scanf("%f",&b);
		
		printf("Digite o segundo numero: \n");
		scanf("%f",&c);
		
		printf("Resultado: %2.f", resultado= b + c);
		
	}
	
	if(a==2){//subtração
		
		printf("Digite o primeiro numero: \n ");
		scanf("%f",&b);
		
		printf("Digite o segundo numero: \n");
		scanf("%f",&c);
		
		printf("Resultado: %2.f", resultado= b - c);
	
	}
	
	if(a==3){//divisão
		
		printf("Digite o primeiro numero: \n ");
		scanf("%f",&b);
		
		printf("Digite o segundo numero: \n");
		scanf("%f",&c);
		
		printf("Resultado: %2.2f", resultado= b / c);
		
	}
	if(a==4){//multiplicação
		
		printf("Digite o primeiro numero: \n ");
		scanf("%f",&b);
		
		printf("Digite o segundo numero: \n");
		scanf("%f",&c);
		
		printf("Resultado: %2.2f", resultado= b * c);
	}
	
	if(a==5){//raiz quadrada
		
		printf("Digite o numero para achar a raiz \n");
		
		scanf("%f",&b);
		
		printf("A Raiz quadrada de %2.2f: %f ", b, resultado = sqrt(b));
	}
	if(a==6){//potencia
		
			printf("digite a base: \n");
			scanf("%f",&b);
			
			printf("digite o expoente \n");
			scanf("%f",&c);
			
			printf("o resultado é: %f",resultado= pow(b,c));
	}
}


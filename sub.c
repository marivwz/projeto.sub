#include<stdio.h>
#include<stdlib.h>

void main () {
	int numero1;
	int numero2;
	int resultado;

	printf("==Calculo de Subtração==");
	puts("\nDigite um valor:");
	scanf("%d",&numero1);
	puts("\nDigite outro valor:");
	scanf("%d",&numero2);
	resultado = numero1-numero2;
	printf("\nA subtração de %d e de %d, resultta em %d\n",numero1,numero2,resultado);
}



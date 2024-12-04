#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	float aresta, volume;
	printf("\n");
	printf("Programa para calcular o volume de um Cubo \n \n \n");
	printf("Digite o valor da aresta: \n");
	scanf("%f",&aresta);
	printf("\n");
	volume = aresta * aresta * aresta;
	printf("O volume deste cubo é: %.3f \n",volume);
	system("pause");
	return 0;
}

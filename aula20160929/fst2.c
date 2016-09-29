#include <stdio.h>

struct racional {
	int numerador;
	int denominador;
};

struct racional soma(int numerador1, int numerador2, int denominador1, int denominador2);

int main() {
	struct racional resposta;
	int num1, den1, num2, den2 ;
	printf("Entre com o numerador e o denominador respectivamente, para duas fracoes : ");
	scanf("%d",&num1);
	scanf("%d",&den1);
	scanf("%d",&num2);
	scanf("%d",&den2);
	resposta = soma (num1,num2,den1,den2);
	printf("Soma: %d/%d \n", resposta.numerador, resposta.denominador);
	return 0;
}

struct racional soma(int numerador1, int numerador2, int denominador1, int denominador2) {
	struct racional resposta;
	resposta.numerador = (numerador1*denominador2)+(numerador2*denominador1);
	resposta.denominador = denominador1*denominador2;
	return resposta;
}

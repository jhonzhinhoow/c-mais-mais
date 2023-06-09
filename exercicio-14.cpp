/* João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.

Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.

João precisa que você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso.

Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens adequadas. */
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	float peso, multa, excesso;
	
	printf("Digite o peso em quilos da pescaria de hoje: \n");
	scanf("%f", &peso);
	
	excesso = peso - 50;
	multa = excesso * 4;
	
	printf("Voce pescou %.2fkg em excesso, e terá que pagar R$%.2f de multa.", excesso, multa);
}

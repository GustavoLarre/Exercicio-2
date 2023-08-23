#include<stdio.h>

main(){

/* 1 - Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.*/

//declaração das variáveis
double num1, num2, soma, mult, sub, div;

//informação inicial
printf("Calculadora Simples");

//entrada de dados
printf("\n Digite o primeiro numero:");
scanf("%lf", &num1);
printf("Digite o segundo numero:");
scanf("%lf", &num2);

//operações
soma = num1 + num2;
sub = num1 - num2;
mult = num1 * num2;
div = num1 / num2;

//saída dos dados
printf("\n Soma: %.2lf", soma);
printf("\n Subtracao: %.2lf", sub);
printf("\n Multiplicacao: %.2lf", mult);
printf("\n Divisao: %.2lf", div);

}
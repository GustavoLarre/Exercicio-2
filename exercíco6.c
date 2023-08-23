#include<stdio.h>
#include<math.h>

main(){

/* 6 - Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.*/

//informação inicial
printf("Descubra a area de qualquer circulo");

//variáveis
double raio, area, PI = 3.14;

//entrada de dados
printf("\n Digite o raio do circulo:");
scanf("%lf", &raio);

//operação (área = PI * (raio * raio))
area = PI *(pow(raio,2));

//saída
printf("\n A area do circulo e: %.3lf", area);

}
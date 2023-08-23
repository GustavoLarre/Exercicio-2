#include<stdio.h>

main(){

/* 2 - escreva um programa que receba um número qualquer e mostre o seu dobro.*/

//variáveis
int num, dobro;

//informação inicial
printf("Digite um numero e descubra o seu dobro");

//entrada do dado
printf("\n Digite o seu numero:");
scanf("%d", &num);

//operação
dobro = num * 2;

//saída do dado
printf("O dobro de: %d", num);
printf("\n e: %d", dobro);

}
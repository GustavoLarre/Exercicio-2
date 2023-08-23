#include<stdio.h>

main(){

/* 7 - faça um algoritimo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa apenas em dias. Considerar um ano com 365 dias e mês com 30 dias.*/

//informação inicial
printf("Descubra quantos dias de vida voce tem");
printf("\n Para isso informe a sua idade em anos, meses e dias");

//variáveis 
float anos, meses, dias, idadeDias;

//entrada dos dados
printf("\n Digite quantos anos voce tem:");
scanf("%f", &anos);
printf("\n Digite os meses:");
scanf("%f", &meses);
printf("\n Por fim informe os dias:");
scanf("%f", &dias);

//operação
idadeDias = (anos * 365) + (meses * 30) + dias;

//saída
printf("Parabens voce tem %.2f dias de vida", idadeDias);

}
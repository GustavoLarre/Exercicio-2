#include<stdio.h>

main(){

/* 4 - Dado um valor em reais e a cotação do dolar, converta esse valor para reais.*/

//informação inicial
printf("Corretora GL");

//variáveis
double reais, dolar = 4.98, conversao;

//entrada do dado
printf("\n Declare os seus reais:");
scanf("%lf", &reais);

//operação
conversao = reais / dolar;

//saída dos dados
printf("\n Na cotacao atual voce tem:%.2lf", conversao);
printf(" dolares");

}
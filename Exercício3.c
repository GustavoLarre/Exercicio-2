#include<stdio.h>

main(){

/* 3 - Dadas as medidas de uma sala, informe a sua área.*/

//informação inicial
printf("Calculo da area de uma sala");

//variáveis
float largura, comprimento, area;

//entrada dos dados
printf("\n Informe a largura da sala:");
scanf("%f", &largura);
printf("\n Informe o comprimento da sala:");
scanf("%f", &comprimento);

//operação
area =  largura * comprimento;

//saída do dado
printf("A area da sala e: %.2fm2", area);

}
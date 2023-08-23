#include<stdio.h>
#include<math.h>

main(){

/* 9 - O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escreva um algoritimo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.*/

//informação inicial
printf("Software da concessionaria Vw");

//variáveis
double custoFabrica, porcentagemVw, lucroVW, imposto1, imposto2, custoFinal;

//entrada dos dados
printf("\n Informe o custo de fabricacao do carro:");
scanf("%lf", &custoFabrica);
fflush(stdin);
porcentagemVw = 0.28;
imposto1 = 0.45;

//operações
lucroVW = custoFabrica * porcentagemVw;
imposto2 = custoFabrica * imposto1;
custoFinal = (custoFabrica * porcentagemVw) + (custoFabrica * imposto1) + custoFabrica;

//saída
printf("\n O lucro da concessionaria Vw e: %.2lf reais", lucroVW);
printf("\n Valor pago em impostos: %.2lf reais", imposto2);
printf("\n O custo final ao consumidor e: %.2lf reais", custoFinal);


}
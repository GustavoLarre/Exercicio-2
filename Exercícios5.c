#include<stdio.h>
#include<math.h>

main(){

/* 5 - Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a porcentagem de lucro da mercadoria.*/

//informação inicial
printf("\nSoftware commerce helper\n");

//variáveis
double custoMercadoria, valorFrete, despesasEventuais, valorVenda, porcentagemLucro;

//entrada dos dados
printf("\n Custo da mercadoria:");
scanf("%lf", &custoMercadoria);
printf("\n Valor do frete:");
scanf("%lf", &valorFrete);
printf("\n Despesas eventuais:");
scanf("%lf", &despesasEventuais);
printf("\nValor de venda:");
scanf("%lf", &valorVenda);

//operação
porcentagemLucro = (valorVenda - (custoMercadoria + valorFrete + despesasEventuais)) * 100 / valorVenda;

//saída do dado
printf("A porcentagem de lucro dessa mercadoria e:%.2lf", porcentagemLucro);
printf(" Porcento");

}
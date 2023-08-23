#include<stdio.h>

main(){

/* 8 - Escreva um algoritimo para ler o sálario atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.*/

//informação inicial
printf("Calcule o reajuste salarial do seu funcionario");

//variáveis
double salarioAtual, porcentagemReajuste, reajusteFinal, novoSalario;

//entrada dos dados
printf("\n Informe o salario atual do funcionario:");
scanf("%lf", &salarioAtual);
printf("\n Informe a porcentagem do reajuste:");
scanf("%lf", &porcentagemReajuste);

//operações
reajusteFinal = porcentagemReajuste / 100;
novoSalario = (salarioAtual * reajusteFinal) + salarioAtual;

//saída
printf("\n Agora o salario do funcionario sera de:%.2lf reais", novoSalario);

}
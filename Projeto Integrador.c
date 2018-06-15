#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//f(x)= cos^2x > Integral determinada a nosso grupo 

float a,b,delta;int n;
	
void retangulo(){
	printf("Valor de A: \n");					scanf("%f", &a);
	printf("Valor de B: \n");					scanf("%f", &b);
	printf("Numero de intercessões:\n");		scanf("%i",&n);
	
	delta = (b-a)/n;}

void riemann(){
	int x; // Contador
	float resultado, total = 0;
	for (x = 1; x <= n; x++){
		resultado = ((cos(a+x*delta))*(cos(a+x*delta)))* delta;
		total = total + resultado;}
	printf("O resulltado encontrado foi: %f\n\n", total);}
	
int main(){
	int menu;
	setlocale(LC_ALL, "Portuguese"); //Função que permite escrever com pontuações e acentuações
	system ("color f0"); // Função que altera a cor do fundo do programa
	printf("\t Integral de Reiman \n");
	retangulo();
	riemann();	
do{
	printf("\t\n Integral de Reiman \n");
	printf("Escolha a opção desejada: \n");   
	printf ("\n[1] - Outros valores para intercessões"); 
	printf ("\n[0] - Sair\n"); 
	printf ("\nSua escolha: "); 
	scanf("%i", &menu); 
	
	if (menu == 1){
	system("cls || clear "); //Comando limpa tela. 
	printf ("..Outros valores para intercessões..\n");
	printf("\t Integral de Reiman \n");
		retangulo();
		riemann();
	}else if (menu == 0){
	system("cls || clear "); //Comando limpa tela. 
		printf("\n\nVocê escolheu sair do Programa !\n");
		return 0; //Comando que Finaliza o programa
	}else{
		system("cls || clear "); //Comando limpa tela. 
		printf("Por favor informe uma opção existente!\n\n");
	}
}while(menu);	
	system ("pause"); 
	return 0;}

//Progama para calcular IMC

#include <stdio.h>

	int main ()
	
	{
		//Declaração de variaveis
		
		float peso;
		float altura;
		float imc;
		
		//entrada de variaveis
		
		printf ("Digite a altura: ");
		scanf ("%f", & altura);
		
		printf ("Digite o peso: ");
		scanf ("%f", & peso);
		
		//Processamento
		
		imc = peso / (altura * altura);
		
		//Criticar para saber em que
		//escala o IMC se encontra
		
		 if (imc <= 18.4){
		 	printf ("Abaixo do peso");
		 }else if (imc >= 18.5 , imc <= 24.9){
		 	printf ("Peso normal");
		 }else if (imc >= 25 , imc <= 29.9){
		 	printf ("Sobre peso!!!");
		 }else if (imc >= 30 , imc <= 39.9){
		 	printf ("Obesidade!!!");
		 }else  {
			printf ("Obesidade Grave!!!");
		 }
		 return 0;
	}
	
		
	
	

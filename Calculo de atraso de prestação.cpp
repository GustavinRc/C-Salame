//Calculo de atraso de prestação
#include <stdio.h>
int main ()
{ 
  float taxa, tempo, valor, prestacao;
		
		printf ("Digite um valor para taxa:");
		scanf ("%f", & taxa);
				
		printf ("Digite valor do tempo:");
		scanf ("%f", & tempo);
		
		printf ("Digite um valor:");
		scanf ("%f", & valor);
		
		prestacao = valor + (valor * taxa/100 * tempo);
		
		printf ("O valor da prestacao e:");
		printf ("%f", prestacao);
		
		return 0;
		}

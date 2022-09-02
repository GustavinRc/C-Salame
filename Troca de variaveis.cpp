// Troca de variaveis
#include <stdio.h>
int main ()
{
int a,b,c;
	printf ("Digite valor para A:");
	scanf ("%d", &a);
	printf ("Digite valor para B:");
	scanf ("%d", &b);
	
	c = a;
	a = b;
	b = c;
	

	printf ("O valor de A =");
	printf ("%d\n", a);
	printf ("O valor de B =");
	printf ("%d\n", b);
return 0;
}

#include <stdio.h>

int main (void)
{
	int mes;
	
	printf("\n Que dia do mes eh hoje? ");
	scanf("%d", &mes);
	
	if (mes >=1 && mes <=10)
	    printf("\n Inicio do mes.\n\n");
    
	else if (mes >=11 && mes <=20)
	    printf("\n Metade do mes. \n\n");
		
	else if (mes >=21 && mes <=30)
	    printf("\n Fim do mes. \n\n");
	    
	else 
		printf("\n Data invalida.\n\n");
		
	printf(" Fim do Programa.\n\n");
	return 0;
}

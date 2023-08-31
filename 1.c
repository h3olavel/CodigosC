#include <stdio.h>
#include <stdlib.h>

void factorial();
void pedit();

int main (){			//funcion principal (main de edruners)
	factorial(5);
	pedit();
	return 0;
}

void factorial(){ 		//funcion secundaria
    int resultado=1;
     
 	for(int numero; numero>=1; numero--)
	 {
 		printf("%d", numero);
 		resultado = resultado*numero;
 	 }
 	 	printf("\n%d", resultado);
 	 
 	 
   /*int c, n=5, fact = 1;
   
    printf("--CALCULAR FACTORIAL--\n");
    
    for (c = 1; c <= n; c++){
        fact = fact * c;
    }

    printf("Factorial de %d es: %d\n", n, fact);*/  
}

void pedit(){
	int numero;
	printf("\nIngresa un numero para calcular su factorial: \n");
	scanf("$d", &numero);
	factorial(numero);
	
}
//impar e impár

#include <stdio.h>

void PedirN();
void CalcuN();

int numero;

int main() {
	PedirN();
	CalcuN();
}

void PedirN(){
	printf("Dame un numero  ");
	scanf("%d", &numero);
}

void CalcuN(){
	if (numero % 2 == 0) {
    printf("El numero %d es par", numero);
  	} else {
    printf("El numero %d es impar", numero);
  }
}
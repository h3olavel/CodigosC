//numeros primos

#include <stdio.h>

void Scan();
void ImpriP();
int EsP();

int numero;

int main() {
Scan();
EsP();
ImpriP();

}

void Scan(){
	printf("Dime un número: \n");
	scanf("%d", &numero);
}

int EsP() {
  if (numero == 0 || numero == 1) return 0;
  if (numero == 4) return 0;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return 0;
  }
}

void ImpriP(){
	if (EsP(numero)) {
    printf("Es primo");
  } else {
   printf("No es primo");
  }
  return 0;
}
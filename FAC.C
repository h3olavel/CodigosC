#include <stdio.h>

int main()
{
    // Ten en cuenta que inicialmente, la variable de hecho es igual a 1
    int c, n, fact = 1;
    
    // Solicita al usuario el número a calcular, se puede definir estáticamente como un hecho si lo desea.
    printf("Ingresa un número para calcular su factorial: \n");
    scanf("%d", &n);
    
    // Calcular factorial
    for (c = 1; c <= n; c++){
        fact = fact * c;
    }

    // Resultado de impresión
    printf("Factorial de %d es: %d\n", n, fact);

    return 0;
}
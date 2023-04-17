#include <stdio.h>

// Se cambió el nombre de la función p a factorial
int factorial(int n)
{
    int resultado = 1;
    int k = 1;

    while (k <= n)
    {
        resultado = resultado * k;
        k = k + 1;
    }
    return resultado;
}

// Se corrigió la función pNr y se cambió el nombre a permutaciones
int permutaciones(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

// Se agregó la función combinaciones
int combinaciones(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Se corrigió la función pAn y se cambió el nombre a permutacionesConRepeticion
int permutacionesConRepeticion(int a[], int n)
{
    int suma = 0;
    int producto = 1;
    int k;

    for (k = 0; k < n; k++)
    {
        suma += a[k];
        producto *= factorial(a[k]);
    }
    return factorial(suma) / producto;
}

int main()
{
    printf("######################################\n");
    printf("##   CALCULOS DE COMBINATORIA       ##\n");
    printf("######################################\n");
    printf("\n\n");

    // Se modificaron las llamadas a las funciones aquí
    printf("Betty ordena sus pulseras de %d formas\n", permutaciones(3, 3));
    printf("Veronica ordena sus pulseras de %d formas\n", permutaciones(10, 10));

    // Se modificaron las llamadas a las funciones aquí
    printf("Betty elige 2 de sus 3 anillos de %d formas\n", combinaciones(3, 2));
    printf("Veronica elige 2 de sus 10 anillos de %d formas\n", combinaciones(10, 2));

    // Se modificaron los nombres de las variables aquí
    int relojesBetty[2];
    relojesBetty[0] = 2;
    relojesBetty[1] = 1;
    // Se modificó la llamada a la función aquí
    printf("Betty ordena sus relojes de %d formas\n", permutacionesConRepeticion(relojesBetty, 2));

    // Se modificaron los nombres de las variables aquí
    int relojesVeronica[3];
    relojesVeronica[0] = 5;
    relojesVeronica[1] = 3;
    relojesVeronica[2] = 2;
    // Se modificó la llamada a la función aquí
    printf("Veronica ordena sus relojes de %d formas\n", permutacionesConRepeticion(relojesVeronica, 3));

    /*system("PAUSE");*/
    return 0;
}

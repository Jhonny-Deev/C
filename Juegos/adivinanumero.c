#include <stdio.h>
#include <stdlib.h>
#include <time.h>   // Incluir esta biblioteca para utilizar time()
#include <cs50.h>

int main(void)
{
    srand(time(NULL));  // Inicializar la semilla para generar números aleatorios

    int numero_aleatorio = rand() % 100 + 1;  // Generar un número aleatorio entre 1 y 100
    int numero_usuario;

    do
    {
        numero_usuario = get_int("Número: ");

        if (numero_usuario < numero_aleatorio)
        {
            printf("El número es más grande!\n");
        }
        else if (numero_usuario > numero_aleatorio)
        {
            printf("El número es más pequeño!\n");
        }
        else
        {
            printf("¡Perfecto!\n");
        }
    } while (numero_usuario != numero_aleatorio);

    return 0;
}
    

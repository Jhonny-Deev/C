#include <cs50.h>
#include <stdio.h>

void imprimir_piramide(int altura);

int main(void)
{
    int altura = get_int("Altura de la pirámide: ");
    
    imprimir_piramide(altura);

    
    
    
}

void imprimir_piramide(int altura)
{
    for (int fila = 0; fila <= altura; fila++)
    {
        // Imprimir espacios en blanco
        for (int espacio = altura - fila; espacio > 0; espacio--)
        {
            printf(" ");
        }
        
        // Imprimir '#' de la parte izquierda de la pirámide
        for (int num_caracteres = 0; num_caracteres < fila; num_caracteres++)
        {
            printf("#");
        }
        
        
        // Imprimir '#' de la parte derecha de la pirámide
        for (int num_caracteres = 0; num_caracteres < fila; num_caracteres++)
        {
            printf("#");
        }
        
        // Nueva línea después de cada fila
        printf("\n");
    }
}

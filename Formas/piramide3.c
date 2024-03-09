#include <cs50.h>
#include <stdio.h>

void print_piramide(int block);

int main(void)
{
    int n = get_int("Altura:");
    print_piramide(n);
    
}

void print_piramide(int block)  //Creo la Funcion
{
    for(int i =0; i<=block; i++) //Imprime los saltos de Linea
    {
        for(int j=0; j<block -i; j++) //J son los espacios y son la altura menos uno
        {
            printf(" ");
        }
            for(int k=0; k<i; k++) //k son los bloques y se van sumando
            {
                printf("#");
            }
    
    printf("\n");
    }
}
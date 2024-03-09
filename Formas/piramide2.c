#include <cs50.h>
#include <stdio.h>

void print_piramide(int piramide);


int main(void)
{
    int n = get_int("Introduce la Altura: ");
    
    print_piramide(n);  //Llamo a la funcion

}

void print_piramide(int piramide)
{
    for (int i=0; i<=piramide; i++)        //Irá sumando saltos de linea
        {
            for (int j=0; j<piramide;j++)  //Irá Sumando espacios
            {
                printf(" ");
            }
            for (int k=0;k <i; k++)        //Irá Sumando Bloques x Fila
            {
            printf("#");
            }
        printf("\n");       
        }
}
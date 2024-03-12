#include <stdio.h>
#include <cs50.h>


//Llamado a la función
float media(int lenght, float array[]);

int main(void)
{
    //Saber el nº de notas a calcular
    int N = get_int("Cuantas notas quieres calcula? ");

    //Saber las Notas
    float puntos[N];
    for (int i = 0; i < N; i++ )
    {
        puntos[i] = get_float("Nota %d: ", i + 1);
    }

    //Crear variable para imprimir funcion
    float media_puntos = media(N,puntos);

    //Imprimir Media
    if (media_puntos > 5)
    {
    printf("Has Aprobado! \n Media: %.2f\n", media_puntos);
    }
    else
    {
        printf("Has suspendido!\n Media: %.2f\n", media_puntos);
    }

}

float media(int lenght, float array[])
{
    //Calcular Media
    float sum = 0;
    for(int i = 0; i < lenght; i++) //lenght son la cantidad de notas a calcular
    {
        sum += array[i];  //Suma de las notas
    }
    return sum /lenght;
}


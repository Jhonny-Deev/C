#include <ctype.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>

//Puntos asignados a cada letra
int Puntos[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int calcular_puntos(string word);

int main(void)
{   
    
    //Obtener palabras de los Jugadores
    string word1 = get_string("Jugador 1: ");
    string word2 = get_string("Jugador 2: ");

    int score1 = calcular_puntos(word1);
    int score2 = calcular_puntos(word2);

    if (score1 > score2)
    {
        printf("Jugador 1 gana con %i Puntos!\n",score1);
    }
    else if ( score1 < score2)
    {
        printf("Jugador 2 gana con %i Puntos!\n",score2);

    }
    else
    {
        printf(" Empate!\n");
    }
    
}

int calcular_puntos(string word)
{
    int score=0;

    int len = strlen(word);
    for (int i =0; i < len; i++)
    {
        if(isupper(word[i]))
        {
        score += Puntos[word[i] - 'A'];
        }
        
        else if (islower(word[i]))
        {
        score += Puntos[word[i] - 'a'];
        }
    }
    return score;
}
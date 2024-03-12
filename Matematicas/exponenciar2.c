#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int multiplo= get_int("Que numero quieres elevar? ");
    int size= get_int ("Por que exponente ");

    int n[size];
    n[0] = 1;
    printf("%i\n",n[0]);

    for(int i =1; i < size; i++)
    {
        n[i] = n[i-1] * multiplo;
        printf("%i\n",n[i]);
    }

}
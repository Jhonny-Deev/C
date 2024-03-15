#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Introduce un nº: ");
    int residuo = x % 2 ;
    if(residuo == 0)
    {
        
        printf("Es Par!\n");        
    }
    else
    {
        printf("Es inpar!\n");
    }
}
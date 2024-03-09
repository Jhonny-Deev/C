#include <cs50.h>
#include <stdio.h>



int main(void)
{
    int n = get_int("Introduce la Altura: ");
    for (int i=0; i<=n; i++)
        {
            for (int j=0; j<n;j++)
            {
                printf(" ");
            }
            for (int k=0;k <i; k++)
            {
            printf("#");
            }
        printf("\n");       
        }


}



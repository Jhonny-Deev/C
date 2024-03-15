#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int a = get_int("Introduce a: ");
    int b = get_int("Introduce b: ");
    int c = get_int("Introduce c: ");
    float discriminante= sqrt(((b*b)-4*a*c));

    if(discriminante >=0)
    {
        float x1= (-b + discriminante)/(2*a);
        float x2= (-b - discriminante)/(2*a);
        printf("********************\n");
        printf(" Solucion 1: %.2f\n",x1);
        printf(" Solucion 2: %.2f\n",x2);
        printf("********************\n");
    }

   else
   {
    printf("Discriminante Negativo!");
   }

    
}
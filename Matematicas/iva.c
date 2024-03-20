#include <stdio.h>
#include <cs50.h>

float calcular_iva(float x,float y);
float calcular_total(float x, float y);



int main(void)
{
    float iva= get_float("Introduce el IVA: ");
    float precio=get_float("Introduce el Precio: ");
    calcular_iva(precio,iva);
    calcular_total(precio, calcular_iva(precio,iva));
    

}
float calcular_iva(float x,float y)
{
    float iva = (x*y)/100;
    printf("El iva es %.2f\n",iva);
    return iva;
}
float calcular_total(float x, float y)
{
    float total= x+y;
    printf("\n El Total es de %.2f\n",total);
    return total;
}


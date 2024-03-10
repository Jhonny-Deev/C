#include <stdio.h>
#include <cs50.h>

int cambio_dolar(int cambio);
int cambio_cincuenta(int cambio);
int cambio_veinte(int cambio);
int cambio_diez(int cambio);
int cambio_cinco(int cambio);
int cambio_uno(int cambio);


int main (void)
{
    float precio = get_float("Introduce el Precio: ");
    float cobro = get_float("Cuanto Dinero Recibo? ");
    float cambio_dolares = cobro - precio;
    int cambio_centavos = (int) (cambio_dolares *100);
    printf("El cambio a Devolver es de %.2f Dolares\n", cambio_dolares);

    while (cambio_centavos >0)
    {
        int dolar=  cambio_dolar(cambio_centavos);
        cambio_centavos= cambio_centavos -(dolar*100);
        int cincuenta = cambio_cincuenta(cambio_centavos);
        cambio_centavos= cambio_centavos - (cincuenta*50);
        int veinte =  cambio_veinte(cambio_centavos);
        cambio_centavos = cambio_centavos - (veinte *20);
        int diez= cambio_diez(cambio_centavos);
        cambio_centavos= cambio_centavos - (diez *10);
        int cinco =  cambio_cinco(cambio_centavos);
        cambio_centavos= cambio_centavos -(cinco *5);
        int uno=  cambio_uno(cambio_centavos);
        cambio_centavos= cambio_centavos - (uno *1);
        printf("Te doy:\n%i Monedas de Dolar.\n%i Monedas de Cincuenta Centavos.\n%i Monedas de Veinte Centavos.\n%i Monedas de Diez Centavos.\n%i Monedas de cinco Centavos.\n%i Monedas de Un Centavo.\n",dolar,cincuenta,veinte,diez,cinco,uno);
    }
}

int cambio_dolar(int cambio)
{
    int dolar=0;
    while(cambio >= 100)
    {
        dolar++;
        cambio = cambio -100;
    }
    return dolar;
}
int cambio_cincuenta(int cambio)
{
    int cincuenta=0;
    while(cambio >=50)
    {
        cincuenta++;
        cambio= cambio -50;
    }
    return cincuenta;
}
int cambio_veinte(int cambio)
{
    int veinte=0;
    while(cambio >=20)
    {
        veinte++;
        cambio= cambio -20;
    }
    return veinte;
}
int cambio_diez(int cambio)
{
    int diez =0;
    while(cambio >= 10)
    {
        diez++;
        cambio= cambio -10;
    }   
    return diez;
}
int cambio_cinco(int cambio)
{
    int cinco=0;
    while(cambio >=5)
    {
        cinco++;
        cambio= cambio-5;
    }
    return cinco;
}
int cambio_uno(int cambio)
{
    int uno=0;
    while(cambio >=1)
    {
        uno++;
        cambio= cambio-1;
    }
    return uno;
}
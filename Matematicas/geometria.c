#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    while (true)
    {
        int tipo = get_int("Pulsa el nº que corresponda a la Figura que quieres Calcular:\n1. Cuadrado.\n2. Rectangulo.\n3. Triangulo.\n4. Circulo.\n5. Salir.\n");
        switch (tipo)
        {
            case 1:
            {
                float lado = get_float("\nIntroduce el lado del cuadrado: ");
                float area = lado * lado;
                float perimetro = lado * 4;
                printf("El area es: %.2f m2\n", area);
                printf("El perímetro es: %.2f m\n", perimetro);
                break;
            }
            case 2:
            {    
                float ancho = get_float("\nIntroduce el ancho del rectangulo: ");
                float alto = get_float("\nIntroduce el alto del rectangulo: ");
                float perimetro_rectangulo = 2 * (ancho + alto);
                float area_rectangulo = ancho * alto;
                printf("\nEl Area es: %.2f m2\n", area_rectangulo);
                printf("El Perimetro es: %.2f m\n", perimetro_rectangulo);
                break;
            }
            case 3:
            {  
                int tipo_triangulo = get_int("\nSi tienes la base y la altura pulsa 1.\nSi tienes la base y el lado pulsa 2.\n ");
                switch (tipo_triangulo)
                {
                    case 1: 
                    {
                        float base = get_float("\nIntroduce la base del triángulo: ");
                        float altura = get_float("\nIntroduce la altura del triángulo: ");

                        float lado_triangulo = sqrt(altura * altura + ((float)base / 2) * ((float)base / 2));
                        float perimetro_triangulo = 2 * lado_triangulo + base;
                        float area_triangulo = (base * altura) / 2.0;
                        printf("\nEl Área es: %.2fm²\n", area_triangulo);
                        printf("El Perímetro es: %.2fm\n", perimetro_triangulo);
                        break;
                    }
                    case 2:
                    {
                        float base = get_float("\nIntroduce la base del triángulo: ");
                        float lado = get_float("\nIntroduce el lado del triángulo: ");

                        float altura2 = sqrt(lado * lado - (base / 2.0) * (base / 2.0));
                        float perimetro_triangulo = 2 * lado + base;
                        float area_triangulo = (base * altura2) / 2.0;
                        printf("\nEl Área es: %.2fm²\n", area_triangulo);
                        printf("\nEl Perímetro es: %.2fm\n", perimetro_triangulo);
                        break;
                    }
                }
                break;
            }
            case 4:
            {
                int tipo_circulo = get_int("Pulsa 1 si tienes el radio.\nPulsa 2 si tienes el Perimetro.\n");
                switch (tipo_circulo)
                {
                    case 1:
                    {
                        float radio = get_float("\nIntroduce el radio:");
                        float perimetro_circulo = 2 * 3.14 * radio;
                        float area_circulo = 3.14 * (radio * radio);
                        printf("\nEl area es: %.2f m2\nEl Perímetro es: %.2f m\n", area_circulo, perimetro_circulo);
                        break;
                    }
                    case 2:
                    {
                        float perimetro_circulo = get_float("\nIntroduce el Perimetro:\n");
                        float radio = (float)perimetro_circulo / (2 * 3.14);
                        float area_circulo = 3.14 * (radio * radio);
                        printf("\nEl area es: %.2f m2\nEl Perímetro es: %.2f m\n", area_circulo, perimetro_circulo);
                        break;
                    }
                }
                break;
            }
            case 5:
                return 0;
            default:
                printf("Opción no válida\n");
                break;
        }
    }
}

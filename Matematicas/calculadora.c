#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Prototipo de la función
void entrada_suma();
void entrada_resta();
void entrada_multiplicacion();
void entrada_division();
void entrada_potencia();
void entrada_raiz();



int main(void) {
    while(true) {
        int operacion = get_int("Pulse el nº correspondiente a la operación que desea calcular:\n\n1-Suma\n2-Resta\n3-Multiplicación\n4-División\n5-Potencia\n6-Raíz Cuadrada\n7-Salir\n\n ");
        
        switch(operacion) {
            case 1:
            {
                entrada_suma();
                break;
            }
            case 2:
            {
                entrada_resta();
                break;
            }
            case 3:
            {
                entrada_multiplicacion();
                break;
            }case 4:
            {
                entrada_division();
                break;
            }
            case 5:
            {
                entrada_potencia();
                break;
            }
            case 6:
            {
                entrada_raiz();
                break;
            }
            case 7:
                return 0;
            default:
                printf("Opción no válida\n");
                break;
        }

    }
}

void entrada_suma() {
    printf("\n--------------------\n");
    float digito1 = get_float("Introduzca el primer número: ");
    float digito2 = get_float("Introduzca el segundo número: ");
    float suma = digito1 + digito2;
    printf("\nResultado: %.2f\n\n", suma);
    printf("\n--------------------\n");
}

void entrada_resta(){
    printf("\n--------------------\n");
    float digito1 = get_float("Introduzca el primer número: ");
    float digito2 = get_float("Introduzca el segundo número: ");
    float resta = digito1 - digito2;
    printf("\nResultado: %.2f\n\n", resta);
    printf("\n--------------------\n");
}

void entrada_multiplicacion()
{
    printf("\n--------------------\n");
    float digito1 = get_float("Introduzca el primer número: ");
    float digito2 = get_float("Introduzca el segundo número: ");
    float producto = digito1 * digito2;
    printf("\nResultado: %.2f\n\n", producto);  
    printf("\n--------------------\n"); 
}
void entrada_division()
{
    printf("\n--------------------\n");
    float digito1 = get_float("Introduzca el primer número: ");
    float digito2 = get_float("Introduzca el segundo número: ");
    float division = digito1 / digito2;
    printf("\nResultado: %.2f\n\n", division);  
    printf("\n--------------------\n"); 
}
void entrada_potencia()
{
    printf("\n--------------------\n");
    float digito1 = get_float("Introduzca el número: ");
    float digito2 = get_float("Introduzca el exponente: ");
    float potencia = pow(digito1, digito2);
    printf("\nResultado: %.2f\n\n", potencia);  
    printf("\n--------------------\n"); 
}

void entrada_raiz()
{
    printf("\n--------------------\n");
    float digito1 = get_float("Introduzca el número: ");
    float raiz = sqrt(digito1);
    printf("\nResultado: %.2f\n\n", raiz);  
    printf("\n--------------------\n"); 
}

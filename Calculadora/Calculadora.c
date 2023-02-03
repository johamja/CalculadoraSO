#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "OpeMate.h"
#include "Pila.h"

// Colores
#define Red "\x1b[31m"
#define G "\x1b[32m"
#define Y "\x1b[33m"
#define B "\x1b[34m"
#define M "\x1b[35m"
#define C "\x1b[36m"
#define Re "\x1b[0m"

void LimPantalla()
{
    // Limpiar la consola
    system("cls");
    system("clear");
}

int main()
{
    bool MenuBool = true;
    int Menu = 0;
    char Operaciones;
    char letra;
    while (MenuBool == true)
    {
        // inicio de la calculadora
        show();
        printf("Que desea hacer?\n");
        printf("1. " B "Ingrese numero" Re "\t 2. " B "Selecione operacion" Re "\t  3. " B "Limpiar ultimo" Re "\n");
        printf("4. " B "Limpiar todo" Re "\t\t 5. " Red "Salir" Re "\n");
        scanf("%d", &Menu);
        printf("\n");

        // Opciones del menu
        switch (Menu)
        {
        case 1:
            if (size() == length() - 1)
            {
                LimPantalla();
                printf(Red"Pila llena"Re"\n\n");
                break;
            }
            else
            {
                int temp;
                printf("Ingresa el numero:\t");
                scanf("%i", &temp);
                push(temp);
                LimPantalla();
                break;
            }
            break;
        case 2:
            LimPantalla();

            show();
            printf("Seleccione la operacion\n");
            printf(C "+,\t-,\t*,\t/,\tp(potencia),\n" Re);
            printf(C "r(raiz cuadrada),\ts(seno),\tc(coseno),\tt(tangente).\n" Re);

            while (getchar() != '\n')
                ;
            scanf("%c", &Operaciones);

            switch (Operaciones)
            {
            case '+':

                break;
            case '-':

                break;
            case '*':

                break;
            case '/':

                break;
            case 'p':

                break;
            case 'r':

                break;
            case 's':

                break;
            case 'c':

                break;
            case 't':

                break;
            default:
                break;
            }
            LimPantalla();
            break;
        case 3:
            pop();
            LimPantalla();
            break;
        case 4:
            wipe();
            LimPantalla();
            break;
        case 5:
            MenuBool = false;
            LimPantalla();
            break;
        default:
            break;
        }
    }

    printf(G"\n\nAdiós\n\n"Re);
    return 0;
}
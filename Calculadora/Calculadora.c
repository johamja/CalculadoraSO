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
                printf(Red "Pila llena" Re "\n\n");
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
            printf(Red "x(cancelar)" Re "\n");

            while (getchar() != '\n')
                ;
            scanf("%c", &Operaciones);

            switch (Operaciones)
            {
            case '+':
                int a = lastelement();
                pop();
                int b = lastelement();
                pop();
                push(Suma(b, a));
                break;
            case '-':
                int a1 = lastelement();
                pop();
                int b1 = lastelement();
                pop();
                push(Resta(b1, a1));
                break;
            case '*':
                int a2 = lastelement();
                pop();
                int b2 = lastelement();
                pop();
                push(Multiplicacion(b2, a2));
                break;
            case '/':
                int a3 = lastelement();
                pop();
                int b3 = lastelement();
                pop();
                push(Division(b3, a3));
                break;
            case 'p':
                int a4 = lastelement();
                pop();
                int b4 = lastelement();
                pop();
                push(Potencia(b4, a4));
                break;
            case 'r':
                int a5 = lastelement();
                pop();
                push(RaizCuadrada(a5));
                break;
            case 's':
                int a6 = lastelement();
                pop();
                push(Seno(a6));
                break;
            case 'c':
                int a7 = lastelement();
                pop();
                push(Coseno(a7));
                break;
            case 't':
                int a8 = lastelement();
                pop();
                push(Tangente(a8));
                break;
            case 'x':
                break;
            default:
                LimPantalla();
                while (getchar() != '\n')
                    ;
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
            LimPantalla();
            while (getchar() != '\n')
                ;
            break;
        }
    }

    printf(G "\n\nAdiós\n\n" Re);
    return 0;
}
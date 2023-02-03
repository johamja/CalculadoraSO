#include <stdio.h>
#include <math.h>

// function definition

/* 
    @param a primer elemento
    @param b segundo elemento
    @return a+b
*/
double Suma(double a, double b)
{
    return a + b;
}

/* 
    @param a primer elemento
    @param b segundo elemento
    @return a-b
*/
double Resta(double a, double b)
{
    return a - b;
}

/* 
    @param a primer elemento
    @param b segundo elemento
    @return a*b
*/
double Multiplicacion(double a, double b)
{
    return a * b;
}

/* 
    @param a primer elemento
    @param b segundo elemento
    @return a/b
*/
double Division (double a, double b)
{
    return a / b;
}

/* 
    @param a primer elemento
    @return raiz cuadrada de a
*/
double RaizCuadrada(double a)
{
    return sqrt(a);
}

/* 
    @param a primer elemento
    @return sen(a)
*/
double Seno(double a)
{
    return sin(a);
}

/* 
    @param a primer elemento
    @return cos(a)
*/
double Coseno(double a)
{
    return cos(a);
}

/* 
    @param a primer elemento
    @return tan(a)
*/
double Tangente(double a)
{
    return tan(a);
}

/* 
    @param a primer elemento
    @param b segundo elemento
    @return a^b
*/
double Potencia(double a, double b)
{
    return pow(a,b);
}
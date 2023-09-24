/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    //begin 12
    double S, D, L;
    const double pi = 3.14; 
    printf("Введите площадь круга: ");
    scanf("%lf", &S);
    
    // Вычисляем диаметр кола
    D = 2 * sqrt(S / pi);
    
    // Вычисляем длину окружности
    L = pi * D;
    
    printf("Диаметр круга: %.2lf\n", D);
    printf("Длина окружности: %.2lf\n", L);
    
    //begin 20
    double A; 
    double A2, A3, A5, A10, A15; 

    printf("Введите число A: ");
    scanf("%lf", &A);

    // Вычисляем A^2
    A2 = A * A;

    // Вычисляем A^3
    A3 = A2 * A;

    // Вычисляем A^5
    A5 = A3 * A2;

    // Вычисляем A^10
    A10 = A5 * A5;

    // Вычисляем A^15
    A15 = A10 * A5;

    // Выводим результаты
    printf("A^2 = %.2lf\n", A2);
    printf("A^3 = %.2lf\n", A3);
    printf("A^5 = %.2lf\n", A5);
    printf("A^10 = %.2lf\n", A10);
    printf("A^15 = %.2lf\n", A15);

    return 0;
}


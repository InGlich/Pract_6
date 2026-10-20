#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    Task();
    Task2();
    Task3();
    TaskDZ();
}
int Task() 
{
    int year;
    printf("Введите год: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Год %d високосный\n", year);
    }
    else {
        printf("Год %d не високосный\n", year);
    }

    return 0;
}
int Task2() {
    double x, F;
    printf("Введите x: ");
    scanf("%lf", &x);
    F = (x >= -3.5) ? (4 * x * x + 2 * x - 19) : (2 * x / (-4 * x + 1));
    printf("F(%.2f) = %.2f\n", x, F);
    return 0;
}
int Task3() {
    double temperature;

    printf("Введите температуру воды (°C): ");
    scanf("%lf", &temperature);
    const char* state = (temperature < 0) ? "лед" :
        (temperature <= 100) ? "жидкое" : "пар";

    printf("При температуре %.1f°C вода находится в состоянии: %s\n",
        temperature, state);

    return 0;
}
int TaskDZ() {
    float x, y;
    printf("Введите координату x: ");
    scanf("%f", &x);
    printf("Введите координату y: ");
    scanf("%f", &y);

    int isInside = 0;

    if (y >= 0) {
        if (x <= 0) {
            if (x * x + y * y <= 4) {
                isInside = 1;
            }
        }
        else {
            if (y <= 2 - 0.5 * x) {
                isInside = 1;
            }
        }
    }
    if (isInside) {
        printf("Точка (%.2f, %.2f) Принадлежит области\n", x, y);
    }
    else {
        printf("Точка (%.2f, %.2f) Не принадлежит области\n", x, y);
    }

    return 0;
}
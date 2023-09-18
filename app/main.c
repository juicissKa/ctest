#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "myfunc.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Неверное количество аргументов\n");
        return 1;
    }

    if (argv[1] < 0) {
        printf("Аргумент должен быть не менее 0!");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++) {
        if (!isdigit(argv[1][i])) {
            printf("Аргумент должен быть натуральным числом!\n");
            return 1;
        }
    }

    double sqrt_num = my_sqrt(atof(argv[1]));
    int fibonachi_num = fibonachi(atoi(argv[1]));

    printf("Квадратный корень: %f\n", sqrt_num);
    printf("Фибоначи: %d\n", fibonachi_num);
    printf("Квадратный корень из фибоначи: %f\n", my_sqrt(fibonachi_num));
    return myfunc(2);
}

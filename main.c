#include <stdio.h>
#include "sqrt.h"

double get_num() {
    double input;
    scanf_s("%lf", &input);
    return input;
}

int main() {
    printf("Enter a num: ");
    double input = get_num();
    double res = msqrt(input);
    printf("sqrt of %.2lf is %.2lf", input, res);
}
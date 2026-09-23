#include <stdio.h>
#include <math.h>

int main(void) {
    double number = 25.0;
    double decimal_number = -3.7;

    printf("sqrt(%.1f) = %.2f\n", number, sqrt(number));
    printf("pow(2, 3) = %.2f\n", pow(2.0, 3.0));
    printf("fabs(%.1f) = %.2f\n", decimal_number, fabs(decimal_number));
    printf("ceil(%.1f) = %.2f\n", decimal_number, ceil(decimal_number));
    printf("floor(%.1f) = %.2f\n", decimal_number, floor(decimal_number));

    return 0;
}

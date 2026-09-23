#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int square(int number) {
    return number * number;
}

int main(void) {
    int result = square(add(3, 4));

    /* โปรแกรมทำ add(3, 4) ก่อน ได้ 7 แล้วจึงทำ square(7) */
    printf("square(add(3, 4)) = %d\n", result);
    return 0;
}

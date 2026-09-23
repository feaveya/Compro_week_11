#include <stdio.h>

void show_title(void);            /* ไม่มี parameter, ไม่คืนค่า */
void show_square(int number);     /* มี parameter, ไม่คืนค่า */
int get_lucky_number(void);       /* ไม่มี parameter, คืนค่า */
int multiply(int a, int b);       /* มี parameter, คืนค่า */

int main(void) {
    show_title();
    show_square(6);
    printf("Lucky number = %d\n", get_lucky_number());
    printf("4 x 5 = %d\n", multiply(4, 5));
    return 0;
}

void show_title(void) {
    printf("Four function forms\n");
}

void show_square(int number) {
    printf("%d squared = %d\n", number, number * number);
}

int get_lucky_number(void) {
    return 7;
}

int multiply(int a, int b) {
    return a * b;
}

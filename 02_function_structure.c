#include <stdio.h>

/* Function prototype: บอกชื่อ ชนิดค่าที่ส่งกลับ และ parameter ก่อน main */
int add(int first, int second);

int main(void) {
    int result = add(12, 8); /* Function call */
    printf("12 + 8 = %d\n", result);
    return 0;
}

/* Function definition */
int add(int first, int second) {
    int total = first + second; /* Local variable */
    return total;               /* Return value */
}

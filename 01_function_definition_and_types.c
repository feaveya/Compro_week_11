#include <stdio.h>

/* ฟังก์ชันที่ผู้เขียนโปรแกรมสร้างเอง (user-defined function) */
void greet(void) {
    printf("Welcome to C functions!\n");
}

int main(void) {
    greet();                 /* เรียกใช้ user-defined function */
    printf("2 + 3 = %d\n", 2 + 3); /* ใช้ operator ที่ภาษาเตรียมให้ */

    return 0;
}

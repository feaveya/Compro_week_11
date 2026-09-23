#include <stdio.h>

int global_score = 100; /* Global scope: ใช้ได้ทั้งไฟล์หลังบรรทัดประกาศ */

void show_scope(void) {
    int local_score = 80; /* Local scope: ใช้ได้เฉพาะใน show_scope */
    printf("Inside show_scope: global = %d, local = %d\n",
           global_score, local_score);
}

int main(void) {
    int local_score = 90; /* คนละตัวแปรกับ local_score ใน show_scope */

    show_scope();
    printf("Inside main: global = %d, local = %d\n",
           global_score, local_score);
    return 0;
}

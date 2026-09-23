#include <stdio.h>

void increase_score(int score) {
    score = score + 10;
    printf("Inside function: %d\n", score);
}

int main(void) {
    int score = 50;

    printf("Before function call: %d\n", score);
    increase_score(score);
    printf("After function call: %d\n", score);

    return 0;
}

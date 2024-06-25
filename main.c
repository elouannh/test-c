#include<stdio.h>

int addition(int a, int b) {
    int c = a + b;
    return c;
}

void main() {
    int result = addition(4, 5);
    printf("%d", result);
}

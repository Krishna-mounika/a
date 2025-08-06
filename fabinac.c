#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next, i;

    printf("Enter how many Fibonacci numbers: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d ", a, b); 

    for(i = 2; i < n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}


#include<stdio.h>

// Function declarations
int sum(int, int);
float sub(int, float);
void mul(int, int);

int main()
{
    int x = 5, y = 20;
    float z = 3.45;

    // Function pointers
    int (*ptr)(int, int);
    float (*ptr1)(int, float);
    void (*ptr2)(int, int);

    // Assign and call sum
    ptr = &sum;
    printf("%d\n", ptr(x, y));

    // Assign and call sub
    ptr1 = &sub;
    printf("%f\n", ptr1(x, z));

    // Assign and call mul
    ptr2 = &mul;
    ptr2(x, y);

    return 0;
}

// Function definitions
int sum(int a, int b)
{
    return a + b;
}

float sub(int a, float b)
{
    return a - b;
}

void mul(int a, int b)
{
    printf("\n%d\n", a * b);
}


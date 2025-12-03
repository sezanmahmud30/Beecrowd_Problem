#include <stdio.h>

int add(int a, int b);  // Function Declaration

int main()
{
    int sum;
    sum = add(5,10);   // Function Call

    printf("Sum = %d\n",sum);
    return 0;
}

    // Function Definition
int add(int a, int b) {
    return a + b;
}

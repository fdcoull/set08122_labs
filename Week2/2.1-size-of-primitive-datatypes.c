#include <stdio.h>

int main()
{
    int integerVariable;
    float floatVariable;
    double doubleVariable;
    char charVariable;
    size_t size;

    size = sizeof(integerVariable);
    printf("Size of integer variable is %zu bytes\n", size);

    size = sizeof(floatVariable);
    printf("Size of float variable is %zu bytes\n", size);

    size = sizeof(doubleVariable);
    printf("Size of double variable is %zu bytes\n", size);

    size = sizeof(charVariable);
    printf("Size of char variable is %zu bytes\n", size);

    return 0;
}

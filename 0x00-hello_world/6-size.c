#include <stdio.h>

/**
 * size 6
 * 
 * size me
 */
int main() 
{
    int a;
    long int b;
    long long int c;
    char d;
    float f;

    printf("Size of a char: %lu byte(s)\n", sizeof(d));
    printf("Size of an int: %lu byte(s)\n", sizeof(a));
    printf("Size of a long: %lu byte(s)\n", sizeof(b));
    printf("Size of a long long: %lu byte(s)\n", sizeof(c));
    printf("Size of a float: %lu byte(s)\n", sizeof(f));
    return (0);
}

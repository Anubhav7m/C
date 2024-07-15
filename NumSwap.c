#include <stdio.h>
/* take two numbers from user and swap them without using third variable*/

int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter first number: \n");
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);
    printf("Number 1 = %d and Number 2= %d \n", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped numbers are: Number 1= %d and Number 2 = %d", a,b);
    return 0;
}

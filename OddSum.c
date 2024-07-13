#include <stdio.h>
/*Take 5 input from user and print sum off odd numbers*/

int main(int argc, char const *argv[])
{
    int num[5];
    int sum = 0;
    printf("Enter 5 numbers: \n");
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &num[j]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (num[i] % 2 != 0)
        {
            sum += num[i];
        }
    }
    printf("Sum of odd numbers is = %d\n", sum);
    return 0;
}
#include <stdio.h>
/* take range from user and print sum of consecutive odd numbers between them*/

int main(int argc, char const *argv[])
{
    int start, end;
    int sum=0;
    printf("Enter starting of range: ");
    scanf("%d", &start);
    printf("Enter ending of range:");
    scanf("%d", &end);
    for(int i=start;i<=end;i++){
        if(i%2!=0){
            sum +=i;
        }
    }
    printf("Sum of odd numbers between [%d,%d] is = %d", start, end, sum);
    return 0;
}

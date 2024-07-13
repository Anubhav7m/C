#include <stdio.h>
/* take input between 1-12 from user and print corresponding month of the year*/

int main(int argc, char const *argv[])
{
    char month[12][10]={"January", "Febuary","March","April","May","June","July","August","September","October","November","December"};
    int num;
    printf("Enter a random number between 1-12: \n");
    scanf("%d", &num);
    for(int i=0; i<13;i++){
        if(num==i){
            printf("The correponding month is: %s", month[i-1]);
        }
    }
    return 0;
}

#include <stdio.h>

/*to give student award on basis of his performance*/

int main(int argc, char const *argv[])
{
    char a;
    printf("Enter A if you either passed in either Maths or Sceince or press B if you passed in both \n");
    scanf("%c", &a);
    switch(a){
        case 'A':
        printf("You are rewarded with 15rs");
        break;
        case 'B':
        printf("your are rewarded with 45rs");
        break;
        default:
        printf("No reawrd");
    }
    return 0;
}

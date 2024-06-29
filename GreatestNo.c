#include <stdio.h>
/*take 3 no from user & print the greatest integer*/

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Input the three integer digits: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a>b && a>c){
        printf("Greatest no is: %d", a);
    }
    else if(b>a && b>c){
        printf("Greatest no is: %d", b);
    }
    else{
        printf("Greatest no is: %d", c);
    }
    return 0;
}


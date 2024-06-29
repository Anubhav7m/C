#include <stdio.h>
/*to print a pattern using # which represents F*/
int main(int argc, char const *argv[])
{
int l,h;
for(l=1;l<=6;l++){
    if(l==1 || l==4){
        for(h=1;h<=6;h++){
            printf("#");
        }
        printf("\n");
    }
    else{
        printf("#\n");
    }
}
    return 0;
}

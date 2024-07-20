#include <stdio.h>
/*calc sum of series*/

int main(int argc, char const *argv[])
{
    double s=0;
    for(int i = 1;i<=50;i++){
        s +=(double)1/i;
    }
    printf("Sum= %0.2lf ", s);
    return 0;
}

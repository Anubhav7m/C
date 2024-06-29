#include <stdio.h>
/* take days from user & print Y,W & days */

int main(int argc, char const *argv[])
{
    int days;
    printf("Enter no of days\n");
    scanf("%d", &days);
    int years= days / 365;
    int weeks= (days%365)/ 7;
    int rdays=(days%365)%7;
    printf("No of years = %d \nNo of weeks=%d \nNo of remaning days= %d" , years,weeks,rdays);
    return 0;
}


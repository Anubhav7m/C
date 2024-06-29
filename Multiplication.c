# include <stdio.h>

/*take number input from user and prints it's multiplication table*/
int main()
{
    int n;
    int a=0;
    int k;
    printf("Enter any number:\n");
    scanf("%d", &n);
    for(k=1; k<=10 ; k++){
    a++;
    printf("The table is= %d\n", n*a);
    }
    return 0;
}

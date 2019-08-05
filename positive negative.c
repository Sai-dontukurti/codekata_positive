#include <stdio.h>

int main()
{
    int number;
    scanf("%d",&number);
    if (number<0)
    printf("number is negative");
    else if(number>0)
    printf("number is positive");
    else if(number=0)
    printf("number is zero");

    return 0;
}

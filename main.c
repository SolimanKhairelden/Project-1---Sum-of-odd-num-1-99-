#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0, x=1;

    while(x<=99){
        sum+=x;
        x+=2;
    }
    printf("Summation of odd numbers from 1 to 99 = %d\n", sum);
    return 0;
}

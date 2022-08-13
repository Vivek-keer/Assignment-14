#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,sum;
    float avg;
    printf("Enter the 10 numbers: \n");

    for(i=0,sum=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10;
    printf("average of number is %.2f ",avg);
    return 0;
}

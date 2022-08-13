#include <stdio.h>


int main()
{
    int a[10],i,sum;
    printf("Enter the 10 number: ");
    for(i=0,sum=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum is %d",sum);
    return 0;
}

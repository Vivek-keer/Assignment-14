`#include <stdio.h>


int main()
{
    int i,a[10];
    printf("Enter the 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        a[i+1]=a[i]<a[i+1]?a[i]:a[i+1];

    }
    printf("smallest number is %d",a[9]);
    return 0;
}


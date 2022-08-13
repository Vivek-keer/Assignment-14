#include <stdio.h>


int main()
{
    int i,rev,a[10];
    printf("Enter the 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
         for(i=0;i<5;i++)
       {
              rev=a[i];
              a[i]=a[9-i];
              a[9-i]=rev;

       }

    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}






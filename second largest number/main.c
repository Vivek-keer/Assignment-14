#include <stdio.h>


int main()
{
    int i,n,max,a[10];
    printf("Enter the 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(n=0;n<2;n++)
    {
         for(i=0;i<9;i++)
       {
          if(a[i]>a[i+1])
          {
              max=a[i];
              a[i]=a[i+1];
              a[i+1]=min;
          }

       }
    }
        printf("Second largest number is %d ",a[8]);
    return 0;
}


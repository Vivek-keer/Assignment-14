#include <stdio.h>


int main()
{
    int i=0,j,a[10],b[10];
    printf("Enter the first array data: ");




    for(j=0;j<10;j++)
    {
           scanf("%d",&a[i]);
           b[j]=a[i]; i++;
    }
       printf(" second array data is : \n");
        for(j=0;j<10;j++)
    {
        printf("%d ",b[j]);
    }
    return 0;
}






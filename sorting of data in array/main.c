#include<stdio.h>
#include <stdlib.h>
void sort(int s[]);

 int main()
 {
    int x[10]; int i,swap,n;
    printf("Enter the number: ");
    for(i=0;i<10;i++)
    scanf("%d",&x[i]);
    for(n=0;n<10;n++)
    {
    for(i=0;i<9;i++)
    {
        if(x[i]>x[i+1])
        {
            swap=x[i];
            x[i]=x[i+1];
             x[i+1]=swap;
        }
    }
    }


    for(i=0;i<10;i++)
   printf(" %d ",x[i]);
    return 0;
 }

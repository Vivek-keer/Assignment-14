#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]; int i,se=0,so=0;
    printf("Enter the 10 number: ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    if(a[i]%2==0)
     se= a[i]+se;
    else so= a[i]+so;
    printf("\nsum of odd is %d",so);
    printf("\nsum of even is %d",se);

    return 0;
}

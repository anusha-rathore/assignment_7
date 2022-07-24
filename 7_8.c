#include<stdio.h>
int main()
{
    int i,x,y;
    printf("enter number\n");
    scanf("%d", &y);
    printf("prime number\n");
    for ( x = y+1;; x++)
    {
        /* code */
    
    for ( i = 2;  i<x; i++)
    {
        /* code */
        if (x%i==0)
           break;
    }
         if (i==x)
{
    /* code */
    printf("%d\n", i);
    break;
}
}

    }
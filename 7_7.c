#include<stdio.h>
int main()
{
    int i,x,y;
    printf("enter enter two number\n");
    scanf("%d%d",&x,&y);
    printf("prime number\n");
    for ( x = 1; x<=y-1; x++)
    {
        /* code */
    
    for ( i = 2; i <=x/2; i++)
    {
        /* code */
        if (x%i==0)
           break;
    }
         if (i==x/2+1)
{
    /* code */
    printf("%d\n", x);
}
}

    }
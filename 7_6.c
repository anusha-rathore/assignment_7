#include<stdio.h>
int main()
{
    int i,x;
    printf("prime number\n");
    for ( x = 1; x<=100; x++)
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
    printf("%d", x);
}

}
return 0;
    }         
    
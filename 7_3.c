#include<stdio.h>
int main()
{
    int N,i ,c;
    int a=0, b=1 ,x;
    printf(" enter number");
    scanf("%d",&N);
    printf("eneter x");
scanf("%d",&x);
    for ( i = 1; i <=N; i++)
    {
        /* code */
        c=a+b;
        if (c==x)

        {
         printf("yess"); 
         break;  /* code */
        }
        
else{
        a=b;
        b=c;     
}}
if (i==N+1)
{
    /* code */printf("no");
}

  return 0;
}
    
#include<stdio.h>
int main()
{
    int N ,c;
    int a=0, b=1;
    printf(" enter number");
    scanf("%d",&N);
    for (int i = 1; i <=N; i++)
    {
        /* code */
        c=a+b;
        a=b;
        b=c;

        
    }
    printf("Nth term of the Fibonnaci series. %d",c);
  return 0;
}
    
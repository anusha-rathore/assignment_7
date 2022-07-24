#include<stdio.h>
int main()
{
    int N ,c;
    int a=0, b=1;
    printf(" enter number");
    scanf("%d",&N);
    printf("N term of the Fibonnaci series\n");
    printf("%d\n%d\n ",a,b);

    for (int i = 1; i <=N; i++)
    {
        /* code */
        c=a+b;
    printf("%d\n",c);

        a=b;
        b=c;     
    }
  return 0;
}
    
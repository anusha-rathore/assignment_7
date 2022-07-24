#include<stdio.h>
int main()
{
    int number ,i,r,sum=0,temp;
    printf("enter number");
    scanf("%d",&number);
    temp=number;

    for ( i = 1; i >0; i++)
    {
        /* code */
        r=number%10;
        sum=sum + (r*r*r);
        number=number/10;
    }

    if (temp==sum)
    {
        /* code */ printf("number is armstrong number");
    }
    else{
        /* code */ printf("number is  not a armstrong number");
           
    }
    
    

}
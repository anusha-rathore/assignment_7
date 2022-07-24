#include<stdio.h>
int main(){
    int a,b,h;

    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    int min = a<b?a:b; 
    for ( h = min; h>=1 ; h--)
    {
        /* code */
        if (a%h==0 && b%h==0)
        {
            printf("hcf is %d  " , h );
        break;    /* code */
        }
        
    }
    
}
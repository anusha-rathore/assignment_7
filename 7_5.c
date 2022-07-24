#include<stdio.h>
int main(){
    int a,b,h;

    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    int min = a<b?a:b; 
    for ( h =1; h<min ; h++)
    {
        /* code */
        if (a%h==0 && b%h==0)
        {
            printf(" no co prime");
        break;    /* code */
        }
        
    /* code */
        }
        if (h==min)
        {
            /* code */
                
        printf(" co prime");
        
        }
        
    

    }
       
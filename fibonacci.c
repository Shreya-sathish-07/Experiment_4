#include<stdio.h>
void main()
{
    int fib1,fib2,fib3,n,i;
    fib1=0;
    fib2=1;
    printf("enter number to generate fibonacci series \n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("enter number greater than 0 \n");

    }
    else if (n==1)
    {
        printf("series is %d",fib1);

    }
    else if(n==2)
    {
        printf("series is %d\t%d",fib1,fib2);
    }
    else
    {
        printf("%d\t%d",fib1,fib2);
        for(i=3;i<=n;i++)
        {
            fib3=fib1+fib2;
            printf("\t%d",fib3);
            fib1=fib2;
            fib2=fib3;
        }
    }
}

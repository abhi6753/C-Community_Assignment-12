#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i;
    printf("Enter number:\n");
    scanf("%d",&num);
    int a,b,c;
    a=-1;
    b=1;
    for(i=1;i<=num;i++)
    {
        c = a+b;
        printf("%d\t",c);
        a = b;
        b = c;
    }
    //printf("Fibonacci of %d term is %d ",num,fib);
    getch();
    return 0;
}

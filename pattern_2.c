#include<stdio.h>
#include<conio.h>
int main()
{
    int line,i,j,k,c=80;
    printf("Enter lines:\n");
    scanf("%d",&line);
    for(i=1;i<=line;i++)
    {
        for(j=1;j<=c/2-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}

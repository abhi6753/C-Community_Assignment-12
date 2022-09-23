#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,line;
    printf("Enter lines:\n");
    scanf("%d",&line);
    for(i=1;i<=line;i++)
    {
        for(j=1;j<=line;j++)
        {
            if(j<=line-i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}

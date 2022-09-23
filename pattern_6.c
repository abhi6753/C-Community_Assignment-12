#include<stdio.h>
#include<conio.h>
int main()
{
    int line,i,j,k;
    printf("Enter no. of lines:\n");
    scanf("%d",&line);
    for(i=1;i<=line;i++)
    {
        for(j=1;j<=line*2-1;j++)
        {
            if(j>=i&&j<=line*2-i)
            {
               if(i==j||j==line*2-i)
                printf("1");
               else
                printf("0");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}

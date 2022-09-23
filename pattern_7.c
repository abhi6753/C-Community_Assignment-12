#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=4-i&&j<=2+i)
            {
               printf("*");
               i>3?8-i:8-i;
            }

            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}

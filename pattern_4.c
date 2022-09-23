#include<stdio.h>
#include<conio.h>
int main()
{
    int line,i,j;
    char k;
    printf("Enter Lines:\n");
    scanf("%d",&line);
    for(i=1;i<=line;i++)
    {
        k='A';
        for(j=1;j<=line;j++)
        {
            if(j<=5-i)
            {
                printf("%c",k++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}

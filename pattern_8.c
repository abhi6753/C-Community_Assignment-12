#include<stdio.h>
#include<conio.h>
int main()
{
    int line,i,j,c=5,k;
    printf("Enter no. of lines:\n");
    scanf("%d",&line);
    for(i=1;i<=line;i++)
    { k=c--;
       for(j=1;j<=line;j++)
       {
           if(j<=(line+1)-i)
           {
               printf("%d",k--);
           }
           else
            printf(" ");
       }
       printf("\n");
    }
    getch();
    return 0;
}

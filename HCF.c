#include<stdio.h>
#include<conio.h>
int main()
{

    int a,b,H,HCF;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0&&b%H==0)
        {
            HCF = H;
            break;
        }
    }
    printf("HCF of %d and %d is %d",a,b,HCF);
    getch();
    return 0;
}

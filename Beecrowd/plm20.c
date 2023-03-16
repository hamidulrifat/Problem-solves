#include<stdio.h>
int main()
{
    int n;
    printf("Enter n = ");
    scanf("%d",&n);
    if(n%100==0)
    {
        printf("banknotes = 100");
    }
    else if(n%50)
    {
        printf("banknotes = 50");
    }
    else if(n%2)
    {
        printf("banknotes = 2");
    }
    else
    {
        printf("banknotes = 1");
    }

}

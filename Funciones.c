#include<stdio.h>

int fact(int);
int reverse(int);
int digits(int);


int main(void)
{
    printf("%d", reverse(1235));
}


int fact(int n)
{
    if(n==0)
        return 1;
    return(n*fact(n-1));
}

int reverse(int n)
{
    int x=0;
    while(n!=0)
    {
        x=x*10;
        x=x+n%10;
        n/=10;
    }
    return x;
}

int digits(int n)
{
    int x=0;
    while(n!=0)
    {
        n/=10;
        ++x;
    }
    return x;
}
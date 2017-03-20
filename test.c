#include<stdio.h>
#include<cs50.h>


int main(void)
{
    char ch=65;
    
    for(int i=65; i<123; i++)
    {
        printf("%c \n",ch);
        ch+=1;
    }
}
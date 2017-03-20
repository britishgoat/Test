#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <cs50.h>
#include<string.h>

int main(int argc, string D[])
{
    if(argc!=2)
        return 1;
    string a="rofl";
    printf("%s \n",a);
    a[0]+=1;
    printf("%s \n",a);
    string x=crypt(a, "50");
    printf("%s \n",x);
    if(strcmp(x, D[1])==0)
        printf("si \n");
    return 0;
}
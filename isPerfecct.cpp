#include<stdio.h>

void isPerfect(long input[], int output[], int length)
{
int i,s,n,j;
for(i=0;i<length;i++)
{

    n=input[i];
    s=0;
    for(j=1;j<=n/2;j++)
    {
        if(n%j==0)
        {

            s=s+j;
        }

    }
    if(s==n)
    {
        output[i]=1;
    }
    else{
        output[i]=0;
    }
}


}

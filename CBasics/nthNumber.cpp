/*
Given a value n

1. return nth Fibonacci number for the function nthFibonacci(int)
	EX: 0 for n=1 and 1 for n=2


2. return nth prime number for the function nthPrime(int)
	EX: 2 for n=1 and 3 for n=2

INPUTS: single integer n

OUTPUTS: nth Fibonacci number for nthFibonacci()
		 nth prime number for nthPrime()

ERROR CASES: return -1 for the error cases
*/

int nthFibonacci(int n)
{
	int a=0,b=1,s,c=2;
	if(n==1)
    {

        return a;
    }
    if(n==2)
    {
        return b;
    }
    while(c<n)
    {
        s=a+b;
        a=b;
        b=s;
        c++;

    }
    return s;
}

int nthPrime(int num)
{
	int c=1,i,t=3,f,j;
	if(num==1)
    {
        return 2;
    }
    while(c<num)
    {
        f=1;
        if(t%2==0)
        {
            f=0;
        }
        else
        {

           for(j=3;j<=t/2;j++)
           {

            if(t%j==0)
            {
                f=0;
                break;
            }
           }
        }
        if(f==1)
        {
            c++;
            printf("%d ",t);
        }
        t++;
    }

   return t-1;
}

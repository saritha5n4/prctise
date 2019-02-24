
#include<stdlib.h>
#include<math.h>

int octalToHexadecimal(long int num)
{
    int hex[1000];
    long int i,f=1,m=8,v=0,s,t,j;
	if (num < 0)
	{
		return -1;
	}
    while(num>0)
    {
        if(f==1)
        {
           v=v+num%10;
            f=10;
            num=num/10;
        }
        v=v+(num%10)*m;
        m=m*8;
        num=num/10;

    }
    i=0;
    while (v != 0) {
		hex[i] = v % 16;
		v = v / 16;
		i++;
	}
	s = hex[0];
	t = 10;
	for (j = 1; j < i; j++)
	{
		s = s + hex[j] * t;
		t=t*10;
	}
	return s;


}

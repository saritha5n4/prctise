/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/


int isOlder(char *dob1, char *dob2) {
	int i=0,t=1,c=10,j=0,m=0,n;
	int a[3],b[3],s;
	while(dob1[i]!='\0' && dob2[j]!='\0')
    {

        i++;
        j++;
    }
    if(c!=i||c!=j)
    {

        return -1;
    }
    i=i-1;
    n=dob1[i]-'0';
    s=dob2[i]-'0';

    i=i-1;

    while(i>=0)
    {

        if(dob1[i]=='-')
        {
            a[m]=n;
            b[m]=s;
            t=1;
            n=dob1[i-1]-'0';
            s=dob2[i-1]-'0';

            m++;
            i=i-2;
            continue;
        }
        t=t*10;
        n=n+(dob1[i]-'0')*t;
        s=s+(dob2[i]-'0')*t;

        i--;

    }
    a[2]=n;
    b[2]=n;//day
    if(a[2]<1 || a[2]>31 || b[2]<1|| b[2]>31)
    {
          printf("val=%d",a[2]);
        return -1;
    }
    if(a[1]<1 || a[1]>12 || b[1]<1 || b[1]>12)
    {
        return -1;
    }
    if(a[0]<b[0])//checking year
    {
        return 1;
    }
    if(a[0]>b[0])
    {

        return 2;
    }
    if(a[1]<b[1])//checking month
    {
        return 1;
    }
    if(a[1]>b[1])
    {

        return 2;
    }
    if(a[2]<b[2])
    {
        return 1;
    }
    if(a[2]>b[2])
    {

        return 2;
    }

    return 0;
}

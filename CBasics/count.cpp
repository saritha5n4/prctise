#include<stdio.h>

/*
OVERVIEW:  Given 2 integers (num1, num2), write a function that returns the count of numbers between the num1..num2 that are divisible by num1.
		E.g.: count(3, 15) returns 5 (3, 6, 9, 12, 15).
		Note : You need to consider Inclusive range
INPUTS:  Two numbers num1, num2.
		num1, num2 >= 0.

OUTPUT: Return the count of numbers between the num1..num2 that are divisible by num1.

ERROR CASES: Return -1 in error cases.

NOTES:
*/
int count(int,int);
int main()
{
    int countTemp = count(5, 20);
	printf("%d\n", countTemp);



}
int count(int num1, int num2) {

	int count = 0, t;
	t = num1;
	if (num1<0 || num2<0 || (num1>num2))
	{

		return -1;
	}
 
  while(t<=num2)
  {

      if(t%num1==0)
      {

          count++;
      }
      t++;
  }
  return count;

}

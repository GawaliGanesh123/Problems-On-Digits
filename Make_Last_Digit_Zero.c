/* Write a program to make the last Digit of a number stored in a variable as a Zero.

Input- 2345
Output-2340

Input- 512
Output-510

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Make_Last_Digit_Zero(int iNo)
{
	int iDigit=0;

	iNo=iNo/10;

	iDigit=iNo*10;

	printf("After Conversion:%d\n",iDigit);
}


int main()
{
   int iValue=0;

   printf("Enter a Number:\n");
   scanf("%d",&iValue);

   Make_Last_Digit_Zero(iValue);

	return 0;
}



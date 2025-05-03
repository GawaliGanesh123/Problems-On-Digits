/*
 
Write a program which accepts number from user and Count Summation of all Digits from that number.

Input : 4326
Output : 15

Input : 54
Output :6

*/


#include<stdio.h>

void SummationofDigits(int iNo)
{
	int iDigit=0, iAns=0;

	while(iNo != 0)
	{
	   iDigit=iNo%10;
	   iAns=iAns+iDigit;
	   iNo=iNo/10;
	}

	printf("Addition of Digits:%d",iAns);
}

int main()
{
   int iNo=0;

   printf("Enter the Number:\n");
   scanf("%d",&iNo);

   SummationofDigits(iNo);

	return 0;
}
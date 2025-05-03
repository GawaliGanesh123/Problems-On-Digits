/*
 
Write a program which accepts number from user and Count Even Digits from that number.

Input : 1634
Output : 2

Input : 37
Output :0

*/

#include<stdio.h>

void CountEvenDigit(int iNo)
{
	int iDigit=0, iCount=0;

	while(iNo != 0)
	{
	   iDigit= iNo%10;

	   if(iDigit % 2 == 0)
	   {
	     iCount++;
	   }

	   iNo=iNo/10;
	}

	printf("Numbers of All Even Digits:%d",iCount);
}


int main()
{
   int iNo=0;

   printf("Enter the Number:\n");
   scanf("%d",&iNo);

   CountEvenDigit(iNo);

	return 0;
}
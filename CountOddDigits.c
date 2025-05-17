/* Write a program which accepts number from user and Count Odd Digits from that number.

Input : 1639
Output : 3

Input : 46
Output :0

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CountOddDigit(int iNo)
{
	int iDigit=0, iCount=0;

	while(iNo != 0)
	{
	   iDigit= iNo%10;

	   if(iDigit % 2 != 0)
	   {
	     iCount++;
	   }

	   iNo=iNo/10;
	}

	printf("Numbers of All Odd Digits:%d",iCount);
}


int main()
{
   int iNo=0;

   printf("Enter the Number:\n");
   scanf("%d",&iNo);

   CountOddDigit(iNo);

	return 0;
}









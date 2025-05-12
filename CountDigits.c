/* Write a program which accepts number from user and Count Digits from that number.

Input : 1634
Output : 4

Input : 37
Output :2
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

void CountDigits(int iNo)
{
	int iDigit=0, iCount=0;

	while(iNo != 0)
	{
	   iDigit=iNo%10;
	   iCount++;
	   iNo=iNo/10;

	}

	printf("Number of Digits:%d",iCount);
}

int main()
{
	int iNo=0;

	printf("Enter the Number:\n");
	scanf("%d",&iNo);

	CountDigits(iNo);

	return 0;
}

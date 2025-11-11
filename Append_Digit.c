/* Write a Program to input a Number from the user and also input a Digit. Append a Digit in the number and print the resulting number.

Input- number: 234 & Digit:9
Output- 2349

Input- Number:256 & Digit:5
Output- 2565

*/
//////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Append_Digit(int iNumber, int iDig)
{
	int iDigit=0;


	iDigit=iNumber*10+iDig;


	printf("After Appending:%d",iDigit);
}


int main()
{
    int iNum=0, iDig=0;

    printf("Enter a Number");
    scanf("%d",&iNum);

    printf("Enter a Digit:\n");
    scanf("%d",&iDig);

    Append_Digit(iNum, iDig);

	return 0;
}
/*

Accept Number From User and count Even and odd digits  of  that number and display.

Input- 12345
Output- Number of Even Digits Are : 2
        Number of Odd Digits Are : 3

*/        

#include<stdio.h>

   int DisplayEvenOddDigits(int iNo)
 {
    int iEvenCnt=0;
    int iDigit=0;
    int iOddCnt=0;

    if(iNo==0)
    {
      printf("Number of Even Digits are:1\n");
      printf("Number of Even Digits are:\n0");

    }

    while(iNo !=0)
    {
    	iDigit=iNo%10;
    	if((iDigit % 2)==0)
      {
         iEvenCnt++;
      }
      else
      {
        iOddCnt++;
      }
      iNo=iNo/10;
    }
    printf("Number of Even Digits are:%d\n",iEvenCnt);
    printf("Number of Odd Digits are:%d\n",iOddCnt);

 }

int main()
{
  int iValue=0;


  printf("Enter the number:\n");
  scanf("%d",&iValue);

  DisplayEvenOddDigits(iValue);

   return 0;
}
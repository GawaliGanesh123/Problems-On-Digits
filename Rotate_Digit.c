/* Write a Program to Take a Three Digit number from the user and rotate its Digit by one position towards the Right.

Input-
Output-

Input-
Output-

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Rotate_Digit(int iNo)
{
	int iDigit=0, iAns=0;

	iDigit=iNo%10;
    iNo=iNo/10;

    iAns=iDigit*100+iNo;

    printf("After Rotation:%d",iAns);

}

int main()
{
   int iValue=0;

   printf("Enter a Number:\n");
   scanf("%d",&iValue);


   Rotate_Digit(iValue);


	return 0;
}
/* Accept Number from User and Return its Reverse Number.

Input- 321
Output - 123

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>

int  Reverse(int iNo)
{
	int iDigit=0, iSum=0;

	while(iNo !=0)
	{
	  iDigit=iNo%10;
	  iSum=(iSum*10)+iDigit;
	  iNo=iNo/10;
	}
    
    return iSum;
}

int main()
{
   int iNo=0, iRet=0;

   printf("Enter the Number:\n");
   scanf("%d",&iNo);

   iRet=Reverse(iNo);

   printf("Reverse Number is:%d",iRet);

	return 0;
}





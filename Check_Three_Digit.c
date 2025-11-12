#include<stdio.h>
#include<stdbool.h>


/*bool Check_Three_Digit(int iNo)
{
	int iDigit=0;

	if((iNo>99) && (iNo<999))          // This Logic is Also Working (Simple and clear)
	{
	  return true;
	}
	else
	{
	  return false;
	}

}*/


bool Check_Three_Digit(int iNo)
{
	int iDigit=0, iAns=0;

	while(iNo != 0)
	{
	   iDigit= iNo%10;
	   iAns++;
	   iNo=iNo/10;
	}


	if(iAns == 3)
	{
	  return true;
	}
	else
	{
	  return false;
	}
}


int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter a Number:\n");
    scanf("%d",&iValue);

    bRet=Check_Three_Digit(iValue);

    if(bRet == true)
    {
    	printf("Yes its 3 Digit Number");
    }
    else
    {
    	printf("No its not 3 Digit Number");
    }

	return 0;
}
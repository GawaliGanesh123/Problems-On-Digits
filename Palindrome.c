/* Accept Number From User and check whether number is palindrome or not.

Input- 324
Output- Number is not palindrome

Input- 121
Output- Number is Palindrome

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h> 

   bool CheckPallindrome(int iNo)
 {
    int iDigit=0;
    int iRev=0;

    int iTemp=iNo;

    while(iNo !=0)
    {
    	iDigit=iNo%10;
      iRev= (iRev*10) + iDigit;
    	iNo= iNo/10;
    }

    if(iRev == iTemp)
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
  bool bRet;


  printf("Enter the number:\n");
  scanf("%d",&iValue);

  bRet= CheckPallindrome(iValue);
  if(bRet== true)
  {
    printf("%d is pallindrome number\n",iValue);
  }
  else
  {
    printf("%d is not a pallindrome number\n",iValue);
  }

   return 0;
}







/* Accept Number From User and return largest digit from that number .

Input-1325
Output- 5

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
  
  int MinDigit(int iNo)
  {
    int iDigit=0;
    int iMin=10;

    if(iNo<0)
    {
      iNo= -iNo;
    }

     while(iNo !=0)
     {
       iDigit=iNo % 10;
       if(iDigit<iMin)
       {
        iMin = iDigit;
       }
        iNo= iNo/10;
      }
      return iMin;
    
     }
  
int main()
{
  int iValue=0;
  int iRet=0;
  


  printf("Enter the number:\n");
  scanf("%d",&iValue);

  iRet= MinDigit(iValue);

  printf("Smallest Digit is:%d\n",iRet);

   return 0;
}




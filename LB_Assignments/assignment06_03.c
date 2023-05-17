// Write program which accepts number from user and Factorial of given number.

#include<stdio.h>

int Factorial(int iNo)
{
    int iProd = 1;
    int iCnt = 0;

    for (iCnt = 1; iCnt <= (iNo); iCnt++)
    {
        iProd = iProd * iCnt;
    }

    return iProd;
}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter numbers: \n");
    scanf("%d",&iValue);
    
    iRet = Factorial(iValue);
    printf("Factorial of number is : %d\n",iRet);
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(5).
    where N is input.
*/

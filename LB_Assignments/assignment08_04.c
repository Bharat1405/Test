// Write program which accepts number from user and return multiplication of all digits.


# include <stdio.h>

int CountDigit(int iNo)
{
    int iDigit = 0;
    int iProd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iProd = iProd * iDigit;
        }
        iNo = iNo / 10;
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
    
    iRet = CountDigit(iValue);
   
    printf("Multiplication : %d\n",iRet);
   
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digits.
*/

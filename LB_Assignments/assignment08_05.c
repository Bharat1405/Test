// Write program which accepts number from user and count difference between summation of odd and even digits.

# include <stdio.h>

int CountOddDigit(int iNo)
{
    int iDigit = 0;
    int iOdd = 0;
    int iEven = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 1)
        {
            iOdd++;
        }
        else
        {
            iEven++;
        }

        iNo = iNo / 10;
    }
    return (iOdd - iEven);
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
    
    iRet = CountOddDigit(iValue);
   
    printf("Difference between summation of odd and even digits : %d\n",iRet);
   
    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digits.
*/

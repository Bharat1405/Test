// Write program which accepts single number from user 
// and calculate difference between summation of its all factors and non-factors.


#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;

    for(iCnt = 1; iCnt <= (iNo); iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
        else
        {
            iSumFact = iSumFact + iCnt;
        }
    }

    iDiff = iSumFact - iSumNonFact - iNo;
    return iDiff;

}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is input.
*/

// Accept single number and Calulate product of its factors.


#include<stdio.h>

int MultiFact(int iNo)
{
    int iProd = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iProd = iProd * iCnt;
        }
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

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}

// ********************************************************

/*
    Time complexity is O(N/2).
    where N is input.
*/

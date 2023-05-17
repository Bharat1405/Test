// Write program which accepts number from user and print numbers till input.


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter numbers: \n");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is input.
*/

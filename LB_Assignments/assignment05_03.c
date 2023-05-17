// Write program which accepts number from user and print numbers till input.


#include<stdio.h>

void DisplayNumberLine(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = -iNo;

    while(iCnt <= iNo)
    {
        printf("%d\t", iCnt);

            iCnt++;
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
    
    DisplayNumberLine(iValue);
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is input.
*/

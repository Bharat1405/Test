// Write program which accepts number from user and print 5 multiples of thr number.


#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",(iCnt*iNo));
    }

}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;

    printf("Enter numbers: \n");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(5).
    where N is input.
*/

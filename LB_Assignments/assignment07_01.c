// Write program which accepts number from user and print its digits in revers order.

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
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
    
    DisplayDigit(iValue);
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is number of digits.
*/

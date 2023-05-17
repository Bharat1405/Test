// Write program which accepts number from user any check wheather it contains 0.


# include <stdio.h>
# include <stdbool.h>

bool DisplayDigit(int iNo)
{
    int iDigit = 0;
    bool iFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            iFlag = true;
            break;
        }

        iNo = iNo / 10;
    }
    return iFlag;
}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter numbers: \n");
    scanf("%d",&iValue);
    
    bRet = DisplayDigit(iValue);

    if(bRet == true)
    {
        printf("It contains zero.\n");
    }
    else
    {
        printf("There is no zero.\n");
    }
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(1) to O(N).
    where N is number of digits.
*/

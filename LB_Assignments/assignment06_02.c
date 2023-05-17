// Write program which accepts single digit number from user and print in words.

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo > 10)
    {
        printf("Invalid input\n");
    }

    if(iNo == 0)
    {
        printf("Zero\n");
    }
    else if(iNo == 1)
    {
        printf("One\n");
    }
    else if(iNo == 2)
    {
        printf("Two\n");
    }
    else if(iNo == 3)
    {
        printf("Three\n");
    }
    else if(iNo == 4)
    {
        printf("Four\n");
    }
    else if(iNo == 5)
    {
        printf("Five\n");
    }
    else if(iNo == 6)
    {
        printf("Six\n");
    }
    else if(iNo == 7)
    {
        printf("Seven\n");
    }
    else if(iNo == 8)
    {
        printf("Eight\n");
    }
    else if(iNo == 9)
    {
        printf("Nine\n");
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
    
    Number(iValue);
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(5).
    where N is input.
*/

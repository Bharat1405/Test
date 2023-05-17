// Write program which accepts number from user and print Small for number less than 50, Medium for 50 to 100 and large for greater that 100.

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 49)
    {
        printf("Small\n");
    }
    else if ((iNo >= 50) && (iNo < 99))
    {
        printf("Medium\n");
    }
    else if (iNo >= 100)
    {
        printf("Large\n");
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

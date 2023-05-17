// Write program which accepts single number from user 
// and display its factors in decreasing order


#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2); iCnt >0; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }

}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}

// ********************************************************

/*
    Time complexity is O(N/2).
    where N is input.
*/

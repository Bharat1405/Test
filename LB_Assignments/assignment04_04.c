// Write program which accepts name from user and print that name. 


#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iProd = 0;

    if(iNo1 == 0)
    {
        iNo1 = 1;
    }
    else if (iNo2 == 0)
    {
        iNo2 = 1;
    }
    else if (iNo3 == 0)
    {
        iNo3 = 1;
    }

    iProd = iNo1 * iNo2 * iNo3;

    return iProd;

}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter three numbers: \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue2);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d",iRet);
   
    return 0;
}

// ********************************************************

/*
    Time complexity is O(1).
    where N is input.
*/

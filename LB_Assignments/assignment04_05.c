// Write program which accepts name from user and print that name. 


#include<stdio.h>

float Percentage(int totalMarks, int Obtainedmarks)
{
    float fPercent = 0.0f;

    if(Obtainedmarks <= 0)
    {
        printf("Error: Invalid input.");
    }

    fPercent = ((float)(Obtainedmarks*100)/totalMarks);

    return fPercent;
}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total numbers: \n");
    scanf("%d",&iValue1);

    printf("Please enter obtained numbers: \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%f",fRet);
   
    return 0;
}

// ********************************************************

/*
    Time complexity is O(1).
    where N is input.
*/

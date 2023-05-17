// Write program which accepts array of number from user, range and return all number in between range.

# include <stdio.h>
# include <stdlib.h>

void Frequency(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Ouput : ");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iNo1 = 0, iNo2 = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory: \n");
        return -1;
    }

    printf("\nEnter %d Elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("\nElements : ");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",p[iCnt]);
    }

    
    printf("\nStart : \n");
    scanf("%d",&iNo1);

    printf("\nEnd : \n");
    scanf("%d",&iNo2);

    Frequency(p, iSize, iNo1, iNo2);
   
    free(p);
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is number of Array elements.
*/

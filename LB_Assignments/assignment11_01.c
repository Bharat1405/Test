// Write program which accepts array of number from user another number NO and whether array contains number number NO.

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

bool Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0;
    bool bRet = false;
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

    
    printf("\nEnter number NO to find in Array : \n");
    scanf("%d",&iNo);

    bRet = Frequency(p, iSize, iNo);

    if(bRet == true)
    {
        printf("\nArray contains number %d.\n",iNo);
    }
    else
    {
        printf("\nThere is no %d in array.\n",iNo);
    }

    free(p);
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is number of Array elements.
*/

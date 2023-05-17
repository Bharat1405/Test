// Write program which accepts array of number from user and return Smallest numbers.

# include <stdio.h>
# include <stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSmall = 0;

    iSmall = Arr[0];

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iSmall) 
        {
            iSmall = Arr[iCnt];
        }  
    }
    
    return iSmall;
}


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
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

    iRet = Maximum(p, iSize);

    printf("\nSmallest element : %d\n",iRet);
   
    free(p);
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is number of Array elements.
*/

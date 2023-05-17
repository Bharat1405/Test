// Write program which accepts array of number from user and return summation of digits of each number.

# include <stdio.h>
# include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;

    printf("\nOutput : ");

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        while (Arr[iCnt] != 0)
        {
           iDigit = 0;
           iDigit = Arr[iCnt] % 10;

           iSum = iSum + iDigit;

           Arr[iCnt] = Arr[iCnt]/10;
           
        }
        
        printf("%d\t",iSum);
        iSum = 0;
    }
    
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

    Display(p, iSize);

   
    free(p);
    
    return 0;
}

// ********************************************************

/*
    Time complexity is O(N).
    where N is number of Array elements.
*/

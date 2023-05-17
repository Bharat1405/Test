// Write program which accepts name from user and print that name. 


#include<stdio.h>


////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////

int main ()
{
    char Name[30];

    printf("Please enter full name : \n");
    scanf("%s",&Name);

    printf("Your name is, %s",Name);

    return 0;
}

// ********************************************************

/*
    Time complexity is O(1).
    where N is input.
*/

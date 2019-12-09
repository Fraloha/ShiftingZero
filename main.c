/*
    Shifting zero.
    This is a little project where i improved my graphics skills.

    Author : Francesco Agostinelli
    Created on : 12/09/2019

    Enjoy it.
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    /*  Variables declaration.  */
    unsigned char _Matrix[10][10];
    signed int i, j, k;

    //Filling all '.' characters in the matrix.
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            _Matrix[i][j] = '.';
        }
    }

    printf("\n\nWelcome to ShiftingZero!\n\n");
    printf("This is a little project where I improved my poor graphics skills.\n");
    printf("I don't care if you do not like it, and I do not even know why you are looking at it if you do not care about it...\n\n");
    printf("Enjoy it.\n\n");
    printf("Wait for it...");
    Sleep(4000);

    printf("\n\n\n");

    //This algorithm shifts the zero character in the matrix, position by position
    //and clear the input every time that the 'i' index increments, so every time that the row change.
    return 0;
}

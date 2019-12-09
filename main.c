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
    signed int i, j, k, w;

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
    k = w = 0;

    while(k < 10){

        //Printing the matrix.
        for(i = 0; i < 10; i++){
            for(j = 0; j < 10; j++){
                if(_Matrix[i][j - 1] == '0'){
                    _Matrix[i][j - 1] = '.';
                }
                printf("%c   ", _Matrix[i][j]);
            }

            printf("\n");
            if(_Matrix[i - 1][j] == '0'){
                _Matrix[i - 1][j] = '.';
            }
        }
        Sleep(1000);
        system("CLS");

        if(w == 9){
            w = 0;
            k += 1;
        }else{
            w++;
        }
        _Matrix[k][w] = '0';
    }

    printf("\n\n\n");
    printf("Goodbye!\nBy Weebli.\n\n");
    return 0;
}

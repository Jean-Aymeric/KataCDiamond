#include <stdlib.h>
#include <stdio.h>

void printDiamond (const char diamondCharacter, const unsigned int diamondSize, const unsigned short diamondFilled, const unsigned short charaterChanged) {
    short iStep = 1;
    for (int i = 0; i >= 0; i += iStep) {
        short jStep = 1;
        if (i >= diamondSize / 2) {
            iStep = -1;
        }
        for (int j = 0; j >= 0; j += jStep) {
            if (j >= diamondSize / 2) {
                jStep = -1;
            }
            if (((i + j) == diamondSize / 2) && (diamondFilled == 0)
                || ((i + j) >= diamondSize / 2) && (diamondFilled != 0)
                ) {
                printf ("%c", diamondCharacter + ((charaterChanged != 0) * i));
            } else {
                printf (" ");
            }
        }
        printf ("\n");
    }
}

int main (void) {
    printf ("An empty simple diamond : \n");
    printDiamond ('A', 7, 0, 0);
    printf ("\nA filled simple diamond : \n");
    printDiamond ('A', 7, 1, 0);
    printf ("An empty diamond : \n");
    printDiamond ('A', 7, 0, 1);
    printf ("\nA filled diamond : \n");
    printDiamond ('A', 7, 1, 1);
    return EXIT_SUCCESS;
}

//
//  main.c
//  forLoopExerciseSeven
//
//  Created by Anthony Capobianco on 12/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int j = 7;
    while (j>0) {
        for (int i=j; i>0; i--) {
            printf("%i", i);
        }
        printf("\n");
        j--;
    }
    
    return 0;
}

//
//  main.c
//  forLoopExerciseEight
//
//  Created by Anthony Capobianco on 12/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int j = 7
        , totalSum = 0;
    
    while (j>0) {
        int sum = 0;
        
        for (int i=j; i>0; i--) {
            printf("%i", i);
            sum += i;
            totalSum += i;
        }
        printf(" Somme = %i \n", sum);
        j--;
    }
    printf("La somme totale est de %i \n", totalSum);
    return 0;
}

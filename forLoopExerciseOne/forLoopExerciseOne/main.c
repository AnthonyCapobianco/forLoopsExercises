//
//  main.c
//  forLoopExerciseOne
//
//  Created by Anthony Capobianco on 12/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    float n[10];
    double sum = 0;
    for (int i=0; i<10; i++) {
        printf("veuillez iinsérer le nombre numéro %i:\n", i+1);
        scanf("%f", &n[i]);
        sum += n[i];
    }
    printf("La somme des nombres est de: %f\n", sum);
    return 0;
}

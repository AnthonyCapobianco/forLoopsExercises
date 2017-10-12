//
//  main.c
//  forLoopExerciseThree
//
//  Created by Anthony Capobianco on 12/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {

    float n[12];
    for (int i=0; i<10; i++) {
        printf("veuillez insérer le nombre numéro %i:\n", i+1);
        scanf("%f", &n[i]);
        //Find the bigest number in the array and place it after all user input in the same array
        n[10]<n[i]?n[10]=i+1:n[10];
        //Same but for the lowest number
        i==0?n[11]=i+1:(n[11]>n[i]?n[11]=i+1:n[11]);
    }
    //print the result
    printf("Le nombre le plus grand est le numéro: %.0f dans la liste\nLe nombre le plus petit est le numéro: %.0f dans la liste\n",
           n[10], n[11]
           );
    
    return 0;
}
/*
 *For simplicity when multiple (minimum/maximum) numbers are identical the sequence value
 *(location of the number in the array) that is printed is the only the lastest.
 *Other strategies may be explored on advice of the customer 
 */

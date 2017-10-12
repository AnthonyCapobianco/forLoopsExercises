//
//  main.c
//  forLoopExerciseTwo
//
//  Created by Anthony Capobianco on 12/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    /* Since we know there is only 10 numbers total we can declare the size of the array to be 10 + 3 the last 3 being
     * storrage for the biggest number, smallest number and the last one being the mean of the afforementioned numbers.
     * Otherwise int x = *number of numbers in the array*; and float n[x+3];
     */
    float n[13];
    for (int i=0; i<10; i++) {
        printf("veuillez insérer le nombre numéro %i:\n", i+1);
        scanf("%f", &n[i]);
        //Find the bigest number in the array and place it after all user input in the same array
        n[10]<n[i]?n[10]=n[i]:n[10];
        //Same but for the lowest number
        i==0?n[11]=n[i]:(n[11]>n[i]?n[11]=n[i]:n[11]);
    }
    //Find the mean value
    n[12] = (n[10]+n[11])/2;
    
    //print the result
    printf("Le nombre le plus grand est: %f\nLe nombre le plus petit est: %f\nEt la moyenne des deux nommbre est: %f\n",
           n[10], n[11], n[12]
           );
    
    return 0;
}

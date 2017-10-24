//
//  main.c
//  loopsExerciseSeven
//
//  Created by Anthony Capobianco on 17/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    float n
    ,i = 1
    ,s = 0;
    
    //Ask for positive integer
    printf("Insérez un nombre entier positif:\n");
    scanf("%f", &n);
    
    //Compute the sum of the inverse of all integers from 1 to the aforespecified integer
    while (i < n+1) {
        s += 1/i;
        i ++;
    }
    
    //Print the result
    printf("Le résultat est de %f\n", s);
    return 0;
}

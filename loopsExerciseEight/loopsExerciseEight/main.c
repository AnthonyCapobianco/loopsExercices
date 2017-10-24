//
//  main.c
//  loopsExerciseEight
//
//  Created by Anthony Capobianco on 17/10/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main(void) {
    float n
    ,i = 2
    ,s = 0;
    
    //Ask for positive integer
    printf("Insérez un nombre entier positif:\n");
    scanf("%f", &n);
    
    //Compute the sum of the inverse of all even integers from 2 to twice the aforespecified integer
    while (i <= n*2) {
        s += 1/i;
        i += 2;
    }
    
    //Print the result
    printf("Le résultat est de %f\n", s);
    return 0;
}
